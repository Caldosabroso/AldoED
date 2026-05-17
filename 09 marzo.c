#include <stdio.h>
int main(){
    int N,G;
    printf("Indique el numero de veces a girar");
        scanf("%d",&G);
    printf("Indique la cantidad de numeros en su arreglo");
        scanf("%d",&N);
    int X[N];
    int Y[N];
    //Capturar datos
    for(int i=0;i<N;i++){
        printf("Indique el componente [%d]",i);
        scanf("%d",&X[i]);
    }
    //Girar el vector y crearlo
    for(int i=0;i<N;i++){

    }
    for(int i=0;i<N;i++){
        printf("%d",Y[i]);
    }
return 0;
}
