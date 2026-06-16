#include <stdio.h>
int menuPrincipal(void);//definicion o prototipo de la funcion
int menuPrincipal(void){
    int opcion;
    printf("--------MENU--------\n[1] Agregar persona\n[2] Eliminar persona\n[3] Mostrar datos\n[4] Sin definir\n[5] Terminar programa\n ");
        scanf("%d",&opcion);
        return opcion;
}
