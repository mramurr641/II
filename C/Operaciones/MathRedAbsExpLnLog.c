// LIBRERIAS
#include <stdio.h>
#include <math.h> // Permite emplear la funcion pow, entre otras funciones matematicas

//MAIN
int main(){
    // DECLARACION DE VARIABLES
    float n,red,abs,exponencial,ln,logaritmo;

    // SOLICITUD DE VALORES AL USUARIO
    printf("Introduzca el valor del numero que desee operar: ");
    scanf("%f",&n);

    // PROCESAMIENTO
    red=ceil(n);        // Redondeo hacia el entero mayor
    abs=fabs(n);        // Valor absoluto
    exponencial=exp(n); // Exponencial e^x
    ln=log(n);// Logaritmo natural o neperiano
    logaritmo=log10(n); // Logaritmo base 10

    // FORMATEO
    printf("El valor redondeado de %f es: %f\n",n,red);
    printf("El valor absoluto de %f es: %f\n",n,abs);
    printf("El valor de e elevado a %f es: %f\n",n,exponencial);
    printf("El logaritmo neperiano de %f es: %f\n",n,ln);
    printf("El logaritmo base 10 de %f es: %f\n",n,logaritmo);

    return 0;
}