#include <stdio.h>
#include <stdlib.h>

struct arbol{
    int dato;
    struct arbol *ptrizq,*ptrder;
};
struct arbol *Insertar(){
struct arbol *ptrtemp;
    ptrtemp = (struct arbol*) malloc(sizeof(struct arbol));
    if(ptrtemp==NULL)
    return NULL;
    printf("Ingrese dato del nodo\n");
    scanf("%d",&ptrtemp->dato);

    ptrtemp->ptrder = NULL;
    ptrtemp->ptrizq = NULL;
    
    return ptrtemp;
}
void inOrden(struct arbol *ptr){
    if(ptr==NULL)
        return ;
    else{
        inOrden(ptr->ptrizq);
        printf(" %d, ",ptr->dato);
        inOrden(ptr->ptrder);
    }

}
void preOrden(struct arbol *ptr){
    
}


int main(){
    struct arbol *raiz=NULL,*ptrtemp;
    int opcion;
    do{
          printf("\n-------MENU-------\n [1] Insertar\n [2] Mostrar\n [3] Salir\n");
          scanf("%d",&opcion);

          switch(opcion){
            case 1:
            ptrtemp = Insertar();
            if(ptrtemp==NULL){
                printf("No se creo el nodo\n");
                break;
            }
            if(raiz==NULL)
                raiz = ptrtemp;
            else{
                struct arbol *ptraux=NULL;
                ptraux = raiz;
                while(1){                    
                    if(ptrtemp->dato > ptraux->dato){
                        if(ptraux->ptrder==NULL){
                            ptraux->ptrder = ptrtemp;
                            break;
                            }
                        else{
                            ptraux = ptraux->ptrder;
                            }
                    }else if(ptrtemp->dato < ptraux->dato){
                        if(ptraux->ptrizq==NULL){
                            ptraux->ptrizq = ptrtemp;
                            break;
                        }else{
                            ptraux = ptraux->ptrizq;                    
                         }
                    }
                    else if(ptrtemp->dato==ptraux->dato){
                        printf("El valor ya existe, reinicie el programa\n");
                        break;
                    }
                        
                    }

                }
            
            break;

            case 2:
                printf("Los nodos son\n");
                inOrden(raiz);
                printf("\n\n");

            break;
            
            case 3:

            break;
          }
        
    }while(opcion!=3);
    return 0;
}
