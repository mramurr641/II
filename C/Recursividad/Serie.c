/*
 Disenar un programa que dado por teclado un valor x mayor que –1 y menor que +1, calcule y presente en pantalla la siguiente suma:
 S(x)=x-(x^2/2)+(x^3/3)-(x^4/4)+.... (x^n/n) 
 1)	Para un valor n dado introducido por teclado.
 2)	Hasta un sumando n (no incluido) tal que abs(x^n/n)<E, donde el valor de E tambien se introduce por teclado.

 Test:
 1)	x=0.5  		n=1    	    S(x)=0.500000000000000
                n=5    	    S(x)=0.407291666666667
                n=10        S(x)=0.405434647817460
                n=50        S(x)=0.405465108108164
                n=100       S(x)=0.405465108108164
    x=-0.5		n=1    	    S(x)=-0.500000000000000
   			    n=5    	    S(x)=-0.688541666666667
                n=10        S(x)=-0.693064856150793
                n=50        S(x)=-0.693147180559945
                n=100       S(x)=-0.693147180559945

 2)	x=0.5   	E=0.1   	S(x)=0.375000000000000    	n=2
                E=0.01 	 	S(x)=0.401041666666667    	n=4
                E=1e-15    	S(x)=0.405465108108164    	n=44

    x=-0.5   	E=0.1  		S(x)=-0.625000000000000    	n=2
                E=0.01 		S(x)=-0.682291666666667    	n=4
                E=1e-15    	S(x)=-0.693147180559944    	n=44

 Nota: S(x)=ln(1+x)
*/

// LIBRERIAS
#include <stdio.h>
#include <math.h>

// DECLARACION DE FUNCIONES - PROTOTIPOS
float solicitudx();
float Sx(float x,unsigned int n);

// MAIN
int main(){
    float x;
    unsigned int n;
    x=solicitudx();
    printf("Introduzca el valor de n: ");
    scanf("%u",&n);
    printf("S(%.1f)=%f",x,Sx(x,n));
    return 0;
}

// DEFINICION DE FUNCIONES
float solicitudx(){ //Solicita un numero en el intervalo (-1,1)
    float x;
    do{
        printf("Introduzca un numero real en el intervalo (-1,1): ");
        scanf("%f",&x);
        if(x<=-1||x>=1)
        {
            printf("La funcion no esta definida para el valor ingresado.\n");
            printf("El valor introducido debe ser mayor a -1 y menor de 1. No incluidos estos.\n");
        }
    }while(x<=-1||x>=1);
    return x;

}

float Sx(float x,unsigned int n){ //Aproxima S(x) por recursividad hasta el parametro n
    
    if(n>0) //Recursividad mientras n>0
    {
        if(n%2) //impar
            return Sx(x,n-1)+pow(x,n)/n; // Decremento de n en cada llamada
        else //par
            return Sx(x,n-1)-pow(x,n)/n; // Decremento de n en cada llamada
    }
    else //Condicion de terminacion n=0
        return 0;
}
