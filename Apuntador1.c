#include <stdio.h>
//Hacer una funcion que intercambie valores
void change(int *x,int *y){
    *x=*x+10;
    *y=*y+10;
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    temp=*y;

}
int main(){
    int a,b;
    a=10;
    b=20;
    printf("Primer prueba [a] es: %d y [b] es: %d\n",a,b);
    printf("Ahora llamando a la funcion change\n");
    int *x,*y;
    x=&a;
    y=&b;
    change(&a,&b);
    printf("Segunda prueba [a] es: %d y [b] es: %d\n",a,b);
    printf("Ahora llamando a la funcion swap\n");
    swap(&a,&b);
    printf("Tercera prueba [a] es: %d y [b] es: %d\n",a,b);
    printf("Ahora digamos que imprimimos el valor de [b] desde un apuntador\n");
    printf("%d",*y);

return 0;
}
