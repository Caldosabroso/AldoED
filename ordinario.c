#include <stdio.h>
#include <stdlib.h>
struct Alumno;
struct Persona{
    char *nombre;//fgets y luego calcular con malloc
    int edad;//malloc
    char genero;//[1]Masculino,[2]Femenino
    char fn[9];//dd/mm/aa
    struct Persona *sigPersona;
    struct Alumno *ptrAlumno;
};
struct Alumno{
    char matricula[10];
    char carrera[6];//IDDSI,LCA,LAT,LB,LF.
    int semestre;//1,2,3,4,5,6,7,8,9,10
    char correo[23];//
    float calificacion[5][5];//3 parciales y 1 ordinario,5 promedios, 5 materias
};
int main(){
int opcion;
scanf("%d",opcion);
    do{
        printf("--------MENU--------\n[1] Agregar persona\n[2] Eliminar persona\n[3] Mostrar datos\n[4] Sin definir\n[5] Terminar programa\n ");
    switch(opcion){
        case 1:
        break:
        case 2:
        break:
    }while(opcion!=5)



return 0;
}
