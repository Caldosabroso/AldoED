#include <stdio.h>
#include <stdlib.h>
struct Dato{
    int d;
    struct Dato *ptrsig;
};
int menu(void){
    printf("Indique la opcion siguiente:\n");
    printf("[1]Crear dato\n[2]Mostrar\n[3]Liberar\n[4]Salir\n");
    int opcion;
    scanf("%d",&opcion);
    return opcion;}

struct Dato *nuevodato(void){
    int dato;
    struct Dato *ptrtemp;
    ptrtemp=(struct Dato*)malloc (sizeof(struct Dato));
    if(ptrtemp==NULL){
        return NULL;
    }else{
        printf("Indique el dato a guardar:\n");
        scanf("%d",&dato);
        ptrtemp->d=dato;
        ptrtemp->ptrsig=NULL;
        return ptrtemp;
    }} 
void liberardato(struct Dato *ptr){
    struct Dato *ptraux;
    struct Dato *ptrante;
    if(ptr==NULL){
        printf("Memoria no reservada\n");
            }
            else
            {
                if(ptr->ptrsig==NULL){
                    free(ptr);
                    ptr=NULL;
                }
                 
                else{
                    ptraux=ptr;
                    while(ptraux->ptrsig!=NULL){
                        ptrante=ptraux;
                        ptraux=ptraux->ptrsig;}
                        free(ptraux);
                        ptrante->ptrsig=NULL;
}}}
void salir(struct Dato *ptr) {
    struct Dato *ptraux;

    while (ptr != NULL) {
        ptraux = ptr;       
        ptr = ptr->ptrsig;   
        free(ptraux);        
    }
}
void mostrardato(struct Dato *ptr){
    while(ptr != NULL){
        printf("%d\n", ptr->d);
        ptr = ptr->ptrsig;
    }/*
    if(ptr==NULL)
    printf("NULL No se ha creado\n");
*/}

int main(void){
    struct Dato *ptr=NULL;
    int opcion;
    do{
        opcion=menu();
        switch(opcion){
       case 1:
       struct Dato* ptrtemp;
            ptrtemp=nuevodato();
            if(ptrtemp==NULL)
                printf("No se reservo espacio para nuevo dato\n");
            else{
                if(ptr==NULL)
                ptr=ptrtemp;
            }
            ptr=ptrtemp;
            while(ptr->ptrsig!=NULL){
                printf("%d\n", ptr->d);
                ptr = ptr->ptrsig;
            }

            break;
        case 2:
            mostrardato(ptr);
        break;
        case 3:
            liberardato(ptr);
        break;

        case 4:
            salir(ptr);
        break;
        default:
            printf("Opcion invalida\n");
        }
    }while(opcion!=4);
    return 0;
}
