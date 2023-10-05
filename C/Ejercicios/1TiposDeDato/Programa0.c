// LIBRERIAS
#include <stdio.h>

// PROGRAMA MAIN
int main(){
    // DECLARACION E INICIALIZACION DE VARIABLES
    float R1;  // Resistencia 1
    float R2;  // Resistencia 2
    float R3;  // Resistencia 3
    float Rs;  // Resistencia equivalente serie
    float aux; // Variable auxiliar 1/Rp para calcular Rp
    float Rp;  // Resistencia equivalente paralelo

    // SOLICITUD DE DATOS
    printf("Introduzca el valor de la resistencia R1 [Omh]: ");
    scanf("%f",&R1);
    printf("Introduzca el valor de la resistencia R2 [Omh]: ");
    scanf("%f",&R2);
    printf("Introduzca el valor de la resistencia R3 [Omh]: ");
    scanf("%f",&R3);

    // PROCESAMIENTO
    Rs=R1+R2+R3;
    aux=1/R1+1/R2+1/R3;
    Rp=1/aux;

    // FORMATEO
    printf("La resistencia equivalente serie es: %.2f [Ohm]\n",Rs);
    printf("La resistencia equivalente paralelo es: %.2f [Omh]",Rp);

    return 0;
}