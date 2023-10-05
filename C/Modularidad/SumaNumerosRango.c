/*
CALCULADORA. Solicita dos numeros reales dentro de un rango y los suma.
*/

//LIBRERIAS
#include <stdio.h>

//MACROS - CONSTANTES
#define LIM_SUP 50  // Limite superior del rango permitido para los sumandos
#define LIM_INF -50 // Limite inferior del rango permitido para los sumandos

//DECLARACION DE FUNCIONES
float leerNumero();              // Lee un numero que se encuentre dentro de un rango
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
    n1=leerNumero();
    n2=leerNumero();
    // Procesamiento
    suma=sumar(n1,n2);
    // Formato por pantalla
    printf("%.2f+%.2f=%.2f",n1,n2,suma);
    // Devolver valores
    return 0;
}

//DEFINICION DE FUNCIONES
float leerNumero() // Lee un numero real que se encuentre dentro de un rango
{   
    // Declaracion de variables
    float n;
    // Solicitud de datos hasta que se encuentre dentro de los limites
    do{ 
        // Solicitud de datos
        printf("Introduzca un numero comprendido entre %i y %i: ",LIM_INF,LIM_SUP);
        scanf("%f",&n);
        // Mensaje al usuario si el dato no se encuentra dentro de los limites
        if(n<LIM_INF||n>LIM_SUP)
            printf("Error. El numero introducido no es correcto.\n");
    }while(n<LIM_INF||n>LIM_SUP);
    // Devolver valores
    return n;
}

float sumar(float n1, float n2) // Suma dos numeros reales
{   
    // Declaracion de variables
    float suma;
    // Procesamiento
    suma=n1+n2;
    // Devolver valores
    return suma;
}
