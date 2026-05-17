#include <stdio.h>
#include <stdlib.h>
//Hacer una funcion que reserve memoria

void reservarmemoria(int **p){
    *p = malloc (sizeof(int));
    **p = 100;
}

int main(){
    int *ptr = NULL;
    reservarmemoria(&ptr);
    printf("Se ha reservado memoria\n");
    printf("%d",*ptr);


return 0;
}
