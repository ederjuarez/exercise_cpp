#include <stdio.h>
using namespace std;

 int main(){

     int cal1, cal2, cal3, calf;
     char nombre [200];
     char apellidoPa [200];
     char apellidoMa [200];

     printf("Escribe tu calificación de Programación: ");
     scanf("%d", &cal1);

     printf("Escribe tu calificación de Cálculo: ");
     scanf("%d", &cal2);

     printf("Escribe tu calificación de Proceso: ");
     scanf("%d", &cal3);
     
     printf("Escribe tu nombre: ");
     scanf("%79s", nombre);

     printf("Escribe tu apellido paterno: ");
     scanf("%79s", apellidoPa);

     printf("Escribe tu apellido Materno: ");
     scanf("%79s", apellidoMa);

     calf = (cal1+cal2+cal3) / 3;

     printf("Estudiante: %s %s %s\n", nombre, apellidoPa, apellidoMa);
     printf("Su promedio es: %d", calf);
     
 }