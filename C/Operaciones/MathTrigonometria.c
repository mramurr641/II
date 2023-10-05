// LIBRERIAS
#include <stdio.h>
#include <math.h> // Permite emplear la funcion pow, entre otras funciones matematicas

// CONSTANTES/MACROS
#define PI 3.1415926535

//MAIN
int main(){
    // DECLARACION DE VARIABLES
    float ang,n,y,x,seno,coseno,tangente,arcoseno,arcocoseno,arcotangente,arcotangente2;

    // SOLICITUD DE VALORES AL USUARIO
    printf("Introduzca el valor del angulo [PI rad] del cual se quieren conocer sus razones trigonometricas: ");
    scanf("%f",&ang);
    printf("Introduzca el valor de la razon trigonometrica de la cual se quiere conocer el angulo [PI rad]: ");
    scanf("%f",&n);
    printf("Introduzca la coordenada en abcisas x para el cálculo de la arcotangente con atan2: ");
    scanf("%f",&y);
    printf("Introduzca la coordenada en ordenadas y para el cálculo de la arcotangente con atan2: ");
    scanf("%f",&x);

    // PROCESAMIENTO
    seno=sin(ang*PI);      // Seno (Angulo en radianes)
    coseno=cos(ang*PI);    // Coseno (Angulo en radianes)
    tangente=tan(ang*PI);  // Tangente (Angulo en radianes)
    arcoseno=asin(n)/PI; // Arcoseno: Arco de circunferencia cuyo seno es el introducido como parametro
    arcocoseno=acos(n)/PI; // Arcotangente: Arco de circunferencia cuyo coseno es el introducido como parametro
    arcotangente=atan(n)/PI; // Arcotangente: Arco de circunferencia cuya tangente es la introducida como parametro
    arcotangente2=atan2(y,x); // Arcotangente: Arco de circunferencia cuya tangente viene definida por las coordenadas cartesianas (x,y)

    // FORMATEO
    printf("El seno de %f [PI rad] es: %f\n",ang,seno);
    printf("El coseno de %f [PI rad] es: %f\n",ang,coseno);
    printf("La tangente de %f [PI rad]es: %f\n",ang,tangente);
    printf("El arcoseno de %f es: %f [PI rad]\n",n,arcoseno);
    printf("El arcocoseno de %f es: %f [PI rad]\n",n,arcocoseno);
    printf("La arcotangente de %f es: %f [PI rad]\n",n,arcotangente);
    printf("La arcotangente para las coordenadas (x,y)=(%f,%f) es: %f [PI rad]\n",x,y,arcotangente2);

    return 0;
}