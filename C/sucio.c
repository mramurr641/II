// LIBRERIAS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// CONSTANTES
#define PI 3.141592 // Macro o constante

int x = 0; // variable global

int main() {
    
    int a = 0;
    
    int a;
    a=0;
    
    
    
    
    
    
    // Declaracion e inicializacion (asignacion inicial) de una variable
    int x=0; // int: tipo de dato, x: nombre/identificador de la variable, =: operador asignacion, 0: valor de la variable x
             // tamanyo= 2 bytes rango: -32768 a 32767
    unsigned int s=128; // tamanyo=2bytes rango 0 a 65535
    long e=1; // tamanyo=4bytes rango -2147483648 a 2147483647

    int y; // Declaracion de la variable y (sin inicializacion)
    y=5; // Asignacion del valor 5 a la variable x
    
    float z=0; //tamanyo 4 bytes rango 3.4E-38 a 3.4E+38
    double b=0.0; //tamanyo 8bytes

    // tambien long double 8 o 10 bytes y de 1,7e-308 a 1,7e+308 o 3,4e-4932 a 1,1e+4932

    char a='e'; // tamanyo=1byte Rango: 0 a 255
    short b=-15;// tamanyo=2byte Rango: -128 a 127

    printf("La variable x vale: %i \n",i);
    printf("La variable z vale: %f \n",z);   // Todos los decimales
    printf("La variable z vale: %.f \n",z);   // Ningun decimal
    printf("La variable z vale: %.2f \n",z); // 2 decimales
    printf("La variable z vale: %.3f \n",z); // 3 decimales redondeando
    printf("El caracter es: %c \n", a);
    printf("La variable b vale: %i \n",b);
    printf("La variable x vale: %li \n",e);
    printf("La variable x vale: %lf \n",b);

    printf("%i %f %c",a,b,c);   // Todos los decimales


    printf("Introduzca el valor de la variable a: ");
    scanf("%i",&a);

    printf("Introduzca el valor de la variable b: ");
    scanf("%f",&b);

    printf("Introduzca el valor de la variable c: ");
    scanf("%c",&c);

    char x[50];
    printf("Introduzca el valor de su nombre: ");
    scanf("%s",s); //aqui no se pone el & //scanf solo lee hasta donde encuentra un espacio
    gets(x);

    
    n=n+1; n+=1; n++;
    n=n+5; n+=5;
    n=n-1; n-=1; n--;
    n=n-3; n-=3;
    n=n*7; n*=7;
    n=n/4; n/=4;
    n=n%6; n%=6;

    
    
    a = a+10; a+=10;
    a=a-5;a-=5;
    a=a*2;a*=2;
    a=a/2;a/=2;
    a%2;
    

    return 0;
}