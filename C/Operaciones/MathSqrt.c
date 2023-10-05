// LIBRERIAS
#include <stdio.h>
#include <math.h> // Permite emplear la funcion sqrt, entre otras funciones matematicas

//MAIN
int main(){
    // DECLARACION DE VARIABLES
    float radicando,raiz2;

    // SOLICITUD DE VALORES AL USUARIO
    printf("Introduzca el radicando: ");
    scanf("%f",&radicando);

    // PROCESAMIENTO
    raiz2=sqrt(radicando);

    // FORMATEO
    printf("La raiz cuadrada de %.4f es: %.4f", radicando,raiz2);

    return 0;
}