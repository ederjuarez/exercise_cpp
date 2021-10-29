#include <cstdlib>
#include <stdio.h>
using namespace std;

 int main(){

     int numero;
     div_t result;

     printf("Introduce un número: ");
     scanf("%d", &numero);

     result = div(numero, 2);

     if(result.rem == 0) {
         printf("El numero: %d es par", numero);
     }else{
        printf("El numero: %d es impar", numero);
     }
     
 }