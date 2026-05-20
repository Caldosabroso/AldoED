#include <stdio.h>
#include <stdlib.h>

struct arbol{
    int dato;
    struct arbol *ptrizq,*ptrder;
};
struct arbol Insertar*(){
struct arbol *ptrtemp;
ptrtemp = (struct arbol) malloc(sizeof(struct arbol));
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
            if(ptrtemp==NULL)
                printf("No se creo el nodo\n");
            if(raiz==NULL)
                raiz = ptrtemp;
            else{
                struct arbol *ptraux;
                ptraux = raiz;
                while(ptraux->ptrizq||ptraux->ptrder!=NULL){
                    
                    if(ptrtemp->dato > ptraux->dato&& ptraux->ptrder==NULL)
                        ptraux->ptrder = ptrtemp;
                    if(ptrtemp->dato < ptraux->dato&& ptraux->ptrizq==NULL)
                        ptraux->ptrizq = ptrtemp;
                    
                        
                    
                
                }
                
            }
            
            break

            case 2:

            break
            
            case 3:

            break
          }
        
    }while(opcion!=3);
}