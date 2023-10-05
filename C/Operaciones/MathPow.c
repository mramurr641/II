// LIBRERIAS
#include <stdio.h>
#include <math.h> // Permite emplear la funcion pow, entre otras funciones matematicas

//MAIN
int main(){
    // DECLARACION DE VARIABLES
    float base, exponente, potencia;

    // SOLICITUD DE VALORES AL USUARIO
    printf("Introduzca el valor de la base: ");
    scanf("%f",&base);
    printf("Introduzca el valor del exponente: ");
    scanf("%f",&exponente);

    // PROCESAMIENTO
    potencia=pow(base, exponente);

    // FORMATEO
    printf("El resultado de la base %f elevado al exponente %f es: %f", base,exponente,potencia);

    return 0;
}