/*
CALCULADORA. Solicita dos numeros reales y los suma.
*/

//LIBRERIAS
#include <stdio.h>

//PROTOTIPOS - DECLARACION DE FUNCIONES (PASO 1)
float sumar(float n1, float n2); // Suma dos numeros reales

//MAIN
int main(){
    // Encabezado
    printf("CALCULADORA DE SUMAS CON SUMANDOS DENTRO DE UN RANGO\n");
    // Declaracion de variables
    float n1;   // Sumando 1
    float n2;   // Sumando 2
    float suma; // Suma
    // Solicitud de valores
    printf("Introduzca el primer sumando real: ");
    scanf("%f",&n1);
    printf("Introduzca el segundo sumando real: ");
    scanf("%f",&n2);
    // Procesamiento
    suma=sumar(n1,n2); // LLAMADA A LA FUNCION - (PASO 2)
    // Formato por pantalla
    printf("%.2f+%.2f=%.2f",n1,n2,suma);
    // Devolver valores
    return 0;
}

//DEFINICION DE FUNCIONES - (PASO 3)
float sumar(float n1, float n2) // Suma dos numeros reales
{   
    // Declaracion de variables
    float suma;
    // Procesamiento
    suma=n1+n2;
    // Devolver valores
    return suma;
}