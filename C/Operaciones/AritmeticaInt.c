// LIBRERIAS
#include <stdio.h>

//MAIN
int main(){
    // DECLARACION DE VARIABLES
    int a, b, suma, resta, multiplicacion, cociente, resto;
    
    // SOLICITUD DE VALORES AL USUARIO
    printf("Introduzca el primer numero entero: ");
    scanf("%i",&a);
    printf("Introduzca el segundo numero entero: ");
    scanf("%i",&b);

    // PROCESAMIENTO
    suma=a+b;
    resta=a-b;
    multiplicacion=a*b;
    cociente=a/b;
    resto=a%b;

    // FORMATEO
    printf("El resultado de la suma es: %i",suma);
    printf("\nEl resultado de la resta es: %i",resta);
    printf("\nEl resultado de la multiplicacion es: %i",multiplicacion);
    printf("\nEl cociente de la division es: %i",cociente);
    printf("\nEl resto de la division es: %i",resto);

    return 0;
}