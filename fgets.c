#include <stdio.h>
int main(){
    printf("Escribe lo que quieras: ");
    char cadena[100];
    fgets(cadena,100,stdin);
    int n = 0;
    while(cadena[n] != '\0'){
        n++;
    }
    if(cadena[n-1] == '\n'){
        cadena[n-1] = '\0';
        n--;
    }
    int esPalindromo = 1;
    for(int i=0; i<n/2; i++){
        if(cadena[i] != cadena[n-1-i]){
            esPalindromo = 0;
        }
    }
    if(esPalindromo)
        printf("Es un palindromo\n");
    else
        printf("No es un palindromo\n");
    return 0;
}
