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
        return 0;
    }
    else{
        printf("Indique el dato de su nodo:\n");
        scanf("%d",&ptrtemp->n);
        ptrtemp->ptrant=ptrtemp;
        ptrtemp->ptrsig=ptrtemp;
    }
    
return ptrtemp;
}
int main(){
    struct Examen *ptrinicial=NULL;
    int opcion;
    do{
        printf("-----MENU-----\n[1]Crear nuevo nodo\n");
        scanf("%d",&opcion);        
        switch (opcion)
        {
        case 1:
        if(ptrinicial==NULL){
            ptrinicial = crearnuevo();
        }
        else
        
            break;
        default:
            break;
        }
    }
    while(opcion!=4);
    return 0;
}
