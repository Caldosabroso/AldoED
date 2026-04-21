#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu(void){
    printf("Indique que quiere hacer:\n ");
    printf("Meter datos [1]\n Imprimir datos [2]\n Salir[3]\n");
    int opcion;
    scanf("%d",&opcion);
    return opcion;
}
int main(){
    int opcion;
    do{
        opcion=menu();

    switch(opcion){
    case 1:
        int *ptr;
    srand(time(NULL));
    ptr=(int*)malloc(sizeof(int)+5);
    
    for(int i=0;i<5;i++){
        ptr[i]=rand()%5+5;
    }
        break;

    case 2:
        for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
        }
        break ;
        default:
        printf("Opcion invalida\n");
    }
}while(opcion!=3);

return 0;
}
    
    
    
        

