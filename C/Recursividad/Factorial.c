/*Disenar un programa que calcule e imprima en pantalla el factorial de un número entero no negativo dado 
 por teclado. Comprobar el mayor número del que se puede calcular su factorial en función del tipo de dato.

 Test:
 0!=1
 5!=120
 7!=5040

 Test tipo de dato:
 short: hasta 7!
 int: hasta 12!
 long: hasta 12!
 float: hasta 34!
 double: hasta 170!
*/

// LIBRERIAS
#include <stdio.h>

// DECLARACION DE FUNCIONES - PROTOTIPOS
int solicitarNatural();
int factorial(int n);

// MAIN
int main(){
    // Declaracion de variables
    int n;
    int f;
    // Solicitud de valores al usuario
    n=solicitarNatural();
    // Procesamiento
    f=factorial(n);
    // Formateo
    printf("El factorial de %i es %i",n,f);
    return 0;
}

// DEFINICION DE FUNCIONES
int solicitarNatural(){ // Solicita numeros naturales
    int n;
    do{
        printf("Introduzca el numero natural del cual quiere calcular su factorial: ");
        scanf("%i",&n);
        if(n<0)
        {
            printf("El factorial solo esta definido para numeros naturales.\n");
            printf("Los naturales son los numeros enteros (sin decimales) mayores o iguales de 0.\n");
        }
    }while(n<0);
    return n;
}

int factorial(int n){ // Funcion factorial recursiva
    if(n) // n!=0 (n distinto de 0) - Condicion de recursividad
        return n*factorial(n-1);
    else // n==0 - Condicion de terminacion de la recursividad
        return 1; // 0!=1 (0 factorial es 1)
}