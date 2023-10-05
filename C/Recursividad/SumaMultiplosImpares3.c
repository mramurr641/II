/*
 Disenar un programa que calcule e imprima en pantalla la suma de todos los numeros impares
 multiplos de 3 comprendidos entre 0 y n, dado un número entero positivo n por teclado.

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
int solicitarNatural();
//int detectarImpar(int n);
int sumatoria(int n);

// MAIN
int main(){
    // Declaracion de variables
    int n,resultado;
    // Solicitud de datos al usuario
    n=solicitarNatural();
    // Procesamiento
    resultado=sumatoria(n);
    // Formateo
    printf("Suma de impares multiplos de %i en el intervalo [0,%i]: %i",multiplo,n,resultado);

    return 0;
}

// DEFINICION DE FUNCIONES
int solicitarNatural() // Solicita enteros al usuario hasta que sean numeros naturales
{
    int n;
    do{
        printf("Introduzca el numero natural del cual quiere calcular su sumatoria: ");
        scanf("%i",&n);
        if(n<0)
        {
            printf("Solo puede introducir numeros naturales para este programa.\n");
            printf("Los naturales son los numeros enteros (sin decimales) mayores o iguales de 0.\n");
        }
    }while(n<0);
    return n;  
}

int sumatoria(int n) // Calcula la suma de los multiplos impares de la constante macro multiplo
{
    if(n>=multiplo)
        if(n%2&&!(n%multiplo)) // Si es impar y multiplo de la macro multiplo (no divisible entre multiplo)
            return n+sumatoria(n-1);
        else
            return sumatoria(n-1);
    else // Condicion de terminacion, que se alcance la division entre 0
        return 0;
}