#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Punto {
    int x;
    int y;
};

int menu() {
    printf("\n--- MENU ---\n");
    printf("1. Reservar memoria\n");
    printf("2. Leer datos\n");
    printf("3. Mostrar datos\n");
    printf("4. Calcular distancias\n");
    printf("5. Salir\n");
    printf("Opcion: ");
    int opcion;
    scanf("%d", &opcion);
    return opcion;
}


void* reservarMemoria(int n, int size) {
    void *p;

    p = malloc(n * size);

    if (p == NULL) {
        printf("Error: no se pudo reservar memoria\n");
    } else {
        printf("Memoria reservada correctamente\n");
    }

    return p;
}


void leerDatos(struct Punto *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nPunto %d\n", i + 1);
        printf("x: ");
        scanf("%d", &p[i].x);
        printf("y: ");
        scanf("%d", &p[i].y);
    }
}


void mostrarDatos(struct Punto *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("Punto %d: (%d, %d)\n", i + 1, p[i].x, p[i].y);
    }
}


void calcularDistancias(struct Punto *p, int n) {
    float distancia;

    for (int i = 0; i < n - 1; i++) {
        distancia = sqrt(pow(p[i+1].x - p[i].x, 2) +
                         pow(p[i+1].y - p[i].y, 2));

        printf("Distancia entre punto %d y %d: %.2f\n",
               i + 1, i + 2, distancia);
    }
}

int main() {
    struct Punto *p = NULL;
    int n = 0;
    int opcion;

    do {
        opcion = menu();

        switch (opcion) {

        case 1:
            printf("Cantidad de puntos: ");
            scanf("%d", &n);

            p = (struct Punto*) reservarMemoria(n, sizeof(struct Punto));
            break;

        case 2:
            if (p == NULL) {
                printf("Primero debes reservar memoria\n");
            } else {
                leerDatos(p, n);
            }
            break;

        case 3:
            if (p == NULL) {
                printf("No hay datos\n");
            } else {
                mostrarDatos(p, n);
            }
            break;

        case 4:
            if (p == NULL) {
                printf("No hay datos\n");
            } else {
                calcularDistancias(p, n);
            }
            break;

        case 5:
            printf("Saliendo...\n");
            break;

        default:
            printf("Opcion invalida\n");
        }

    } while (opcion != 5);

    return 0;
}
