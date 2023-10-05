/*
Disenar un programa que calcule e imprima en pantalla la suma de todos los numeros impares
 multiplos de 3 comprendidos entre 0 y n, dado un numero entero positivo n por teclado.

Test:
Suma impares multiplos de 3 [0,10]: 12
Suma impares multiplos de 3 [0,100]: 867
Suma impares multiplos de 3 [0,1000]: 83667
*/

// LIBRERIAS
#include <stdio.h>

// CONSTANTES - MACROS
#define multiplo 3

// DECLARACION DE FUNCIONES - PROTOTIPOS
unsigned int sumatoria(int n);

// MAIN
int main(){
    // Declaracion de variables
    unsigned int n,resultado;
    // Solicitud de datos al usuario
    printf("Introduzca un numero natural: ");
    scanf("%u",&n);
    // Procesamiento
    resultado=sumatoria(n);
    // Formateo
    printf("Suma de impares multiplos de %u en el intervalo [0,%u]: %u",multiplo,n,resultado);

    return 0;
}

// DEFINICION DE FUNCIONES
unsigned int sumatoria(int n)  // Calcula la suma de los multiplos impares de la constante macro multiplo
{
    if(n>=multiplo) // Se aplica recursividad mientras el numero introducido sea mayor que la macro multiplo
        if(n%2&&!(n%multiplo)) // Si es impar y multiplo de la macro multiplo (no divisible entre multiplo)
            return n+sumatoria(n-1);
        else
            return sumatoria(n-1);
    else // Condicion de terminacion, que el numero introducido sea menor que la macro multiplo
        return 0;
}