#include <stdio.h>
int menuPrincipal(void);//definicion o prototipo de la funcion
int menuPrincipal(void){
    int opcion;
    printf("--------MENU--------\n[1] Agregar persona\n[2] Eliminar persona\n[3] Mostrar datos\n[4] Sin definir\n[5] Terminar programa\n ");
        scanf("%d",&opcion);
        return opcion;
}
//Funcion para crear nueva persona 
//Falta hacer que tanto nuevaPersona como nuevoAlum contengan todos los datos solicitados
struct Persona *nuevaPersona(void){
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
//Funcion para crear nuevo Alumno

//Funcion para dar de alta a una persona nueva
int Altas(strct Persona **ptr){
    struct Persona *P=NULL;
    struct Persona *A=NULL;
    int b= 1;
    P=nuevaPersona();
    if(P==NULL)
        b=0;
    else{
        A=nuevoAlumno();
        if(A==NULL){
            b=0;
            free(P);
        }
            else {
                P->ptrAlum=A;
                if(*ptr==NULL)//no se ha creado ningun nodo
                    *ptr=P;//apuntar al primer nodo
//Para no tener que hacer las dos lineas anteriores 
            P->Ptrsig=*ptr;
            *ptr=P;
    }
