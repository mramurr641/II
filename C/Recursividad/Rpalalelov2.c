/*
Disenar un programa que calcule la resistencia equivalente de un conjunto de hasta un máximo de 100
resistencias en paralelo. El programa deberá leer por teclado las resistencias individuales en ohmios,
de una en una y adecuadamente validadas, finalizando la entrada de datos bien cuando se introduzca un
valor 0 para la resistencia o bien cuando se haya introducido el nº máximo de resistencias, presentando
en pantalla la resistencia equivalente en ohmios.
*/

// LIBRERIAS
#include <stdio.h>

// CONSTANTES - MACROS
#define max 5

// DECLARACION DE FUNCIONES - PROTOTIPOS
float Rin(unsigned int n);
float Raux(unsigned int n);
float Req();

//MAIN
int main(){
    printf("La resistencia equivalente en paralelo es: %f",Req());
    return 0;
}

// DEFINICION DE FUNCIONES
float Rin(unsigned int n){
    float R;
    do{
        printf("Introduzca el valor de la resistencia %u: ",n);
        scanf("%f",&R);
        if(R<0)
            printf("La resistencia introducida no es valida.\n");
    }while(R<0);
    return R;
}

float Raux(unsigned int n){
    float R;
    if(n<=max)
    {
        R=Rin(n);
        if(R)
            return Raux(n+1)+1/R;
        else
            return 0;
    }
    else
        return 0;
}

float Req(){
    float Req;
    float Rsum = Raux(1);
    if(Rsum)
        Req=1/Rsum;
    else
        printf("No hay ninguna resistencia.\n");
    return Req;
}
