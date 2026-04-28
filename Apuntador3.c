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

struct Dato* creardato(){
    struct Dato *temp = malloc(sizeof(struct Dato));

    if(temp == NULL){
        printf("Error de memoria\n");
        return NULL;
    }

    printf("Ingresa el valor: ");
    scanf("%d", &temp->d);

    temp->ptrsig = NULL;

    return temp;
}
void mostrardato(struct Dato *ptr){
    while(ptr != NULL){
        printf("%d -> ", ptr->d);
        ptr = ptr->ptrsig;
    }
    printf("NULL No se ha creado\n");
}
void liberardato(struct Dato *ptr){
    struct Dato *temp;

    while(ptr != NULL){
        temp = ptr;
        ptr = ptr->ptrsig;
        free(temp);
    }
}
void salir() {
    struct Dato *ptraux;

    while (ptr != NULL) {
        ptraux = ptr;       
        ptr = ptr->ptrsig;   
        free(ptraux);        
    }
}

int main(void){
    struct Dato *ptr=NULL;
    int opcion;
    do{
        opcion=menu();
        switch(opcion){
       case 1:
            if(ptr == NULL){
            ptr = creardato();
            } else {
            struct Dato *nuevo = creardato();
            nuevo->ptrsig = ptr;
            ptr = nuevo;
            }
        break;

        case 2:
            mostrardato(ptr);
            break;
        case 3:
            liberardato(ptr);
        case 4:
            salir();
        break;

        default:
            printf("Opcion invalida\n");
        }
    }while(opcion!=4);
    return 0;
    salir();
}
