/* 
Diseñar un programa que calcule e imprima en pantalla la potencia de un número,
 dados por teclado el número base (real) y el exponente (entero).

Test:
2^10=1024.000 (base positiva, exponente positivo)
3^4=81.000 (base positiva, exponente positivo)
2^-2=0.250 (base distinta de cero, exponente negativo)
1^0=1.000 (base distinta de cero, exponente 0)
0^1=0.000 (base cero, exponente positivo)
0^0=Indeterminacion (base 0, exponente 0)
0^-1=Infinito (base 0, exponente negativo)
*/

// LIBRERIAS
#include <stdio.h>

// DECLARACION DE FUNCIONES - PROTOTIPOS
float potencia(int base, float exp);

//MAIN
int main(){
    // Declaracion de variables
    float base;
    int exp;
    float resultado;
    // Solicitud de valores al usuario
    printf("Introduzca el valor de la base (numero real): ");
    scanf("%f",&base);
    printf("Introduzca el valor del exponente (numero entero): ");
    scanf("%i",&exp);
    // Procesamiento
    resultado=potencia(base,exp);
    // Formateo
    if(!((base==0&&exp==0)||(base==0&&exp<0)))
        printf("El resultado es: %.3f",resultado);

    return 0;
}

// DEFINICION DE FUNCIONES
float potencia(int base, float exp)
{   if(base)
    {
        if(exp)
        {
            if(exp>=1)
                return base*potencia(base,exp-1);
            else //if(exp<=-1)
                return 1.0/base*potencia(base,exp+1);
        }
        else //exp==0
            return 1;
    }
    else
    {
        if(exp>0)
            return 0;
        else if(exp==0)
        {
            printf("Indeterminacion\n");
            return 0;
        }
        else //exp<0
        {
            printf("Infinito\n");
            return 0;
        }
    }
}