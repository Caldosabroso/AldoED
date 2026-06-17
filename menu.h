#include <stdio.h>
int menuPrincipal(void);//definicion o prototipo de la funcion
int menuPrincipal(void){
    int opcion;
    printf("--------MENU--------\n[1] Agregar persona\n[2] Eliminar persona\n[3] Mostrar datos\n[4] Sin definir\n[5] Terminar programa\n ");
        scanf("%d",&opcion);
        return opcion;
}

struct Persona *crearNuevaPersona(void){
    struct Persona *ptrTemp;

    ptrTemp = (struct Persona *) malloc(sizeof(struct Persona));

    if(ptrTemp == NULL){
        printf("No se reservó memoria\n");
        return NULL;
    }

    ptrTemp->nombre = NULL;
    ptrTemp->ptrSig = NULL;
    ptrTemp->ptrAlum = NULL;

    return ptrTemp;
}
