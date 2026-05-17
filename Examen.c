#include <stdio.h>
#include <stdlib.h>
struct Examen
{
    int n;
    struct Examen *ptrant;
    struct Examen *ptrsig;
    
};
struct Examen *crearnuevo(void){
    struct Examen *ptrtemp;
    ptrtemp = (struct Examen*) malloc(sizeof(struct Examen));
    if(ptrtemp==NULL){
        printf("No se revervó memoria\n");
        return NULL;
    }
    else{
        printf("Indique el dato de su nodo:\n");
        scanf("%d",&ptrtemp->n);
        ptrtemp->ptrant=ptrtemp;
        ptrtemp->ptrsig=ptrtemp;
    }
    
return ptrtemp;
}
struct Examen mostrar(struct Examen *ptr){

}
int main(){
    struct Examen *ptrinicial=NULL;
    int opcion;
    do{
        printf("Ingrese un numero de opcion: \n\n");
        printf("-----MENU-----\n[1] Crear nuevo nodo\n[2] Mostrar\n");
        scanf("%d",&opcion);        
        switch (opcion)
        {
        case 1:
        if(ptrinicial==NULL){//Primer caso, hay un nodo
            ptrinicial = crearnuevo();
        }
        else{//Segundo caso, hay al menos 1
            struct Examen *ptrnuevo=NULL;
            ptrnuevo = crearnuevo();
            struct Examen *ptraux;
            ptraux = ptrinicial;
            while(ptraux->ptrsig != ptrinicial){
                ptraux = ptraux->ptrsig;
            }
            ptraux->ptrsig = ptrnuevo;
            ptrnuevo->ptrsig = ptrinicial;
            ptrinicial->ptrant = ptrnuevo;
            ptrnuevo->ptrant = ptraux;
        }
        
            break;
        default:
            break;
        }
    }
    while(opcion!=4);
    return 0;
}