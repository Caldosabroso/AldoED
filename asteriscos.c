/*Ejercicio de asteriscos, 1/4 de cada parte de un rombo*/
#include <stdio.h>
int main(void){
    int f,c;
    printf("Indique la cantidad de filas: ");
    scanf("%d",&f);
    printf("Indique la cantidad de columnas: \n");
    scanf("%d",&c);
/*
    for(int j=0;j<f;j++){
            printf("\n");
        for(int i=0;i<c;i++){
            printf("*");
    }    }
*/
/*
//Este tiene un error en i<j+1
    for(int j=0;j<f;j++){
        printf("\n");
        for(int i=0;i<j;i++){
            printf("*");
     }   }
/*

/*
    for(int j=0;j<f;j++){
        printf("\n");
            for(int i=0;i<j+1;i++){
                printf("*");
     }   }

*/
/*
    for(int j=0;j<f;j++){
        printf("\n");
            for(int i=j;i<c;i++){
                printf("*");

        }    }
*/







}
