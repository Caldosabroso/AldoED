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

int main(){
    struct arbol *raiz=NULL,*ptrtemp;
    int opcion;
    do{
          printf("-------MENU-------\n [1] Insertar\n [2] Eliminar\n [3] Salir");
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
                struct arbol *ptraux;
                ptraux = raiz;
                while(ptraux!=NULL){
                    
                    if(ptrtemp->dato > ptraux->dato){
                        if(ptraux->ptrder==NULL){
                        ptraux->ptrder = ptrtemp;
                        break;
                    }else{
                        ptraux = ptraux->ptrder;
                    
                    }}else if(ptrtemp->dato < ptraux->dato){
                        if(ptraux->ptrizq==NULL){
                        ptraux->ptrizq = ptrtemp;
                        break;
                    }else{
                        ptraux = ptraux->ptrizq;
                    
                         }
                    }
                        
                }

                }
            
            break;

            case 2:

            break;
            
            case 3:

            break;
          }
        
    }while(opcion!=3);
}
