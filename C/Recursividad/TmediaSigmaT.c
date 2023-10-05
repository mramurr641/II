/*
Diseñar un programa que lea por teclado un conjunto de datos de temperatura en el intervalo [-50,+50],
y que calcule su media aritmética y su desviación estándar. El tamaño del conjunto de datos no se especifica a priori,
finalizándose la entrada de datos con el valor –99.
Tmedia=Sumatoria(Ti)/n
Desviacion Tipica T=((Sumatoria((Ti-Tmedia)^2))/n)^(1/2)=((Sumatoria(Ti^2)-n*Tmedia^2)/n)^(1/2)

Test:
Datos de entrada: 4,5,5,6,5,5,5,5,-99
Numero de datos de entrada validos: 8
Tmedia: 5.00
SigmaT: 0.50 (Desviacion Tipica T)

Datos de entrada: -5,0,5,10,-99
Numero de datos de entrada validos: 4
Tmedia: 2.50
SigmaT: 5.59 (Desviacion Tipica T)

Datos de entrada: -60,51,-99
Numero de datos de entrada validos: 0
*/

// LIBRERIAS
#include<stdio.h>
// CONSTANTES - MACROS
#define LONGITUD_T 999
#define TMIN -50
#define TMAX 50
#define CODE -99
// DECLARACION DE FUNCIONES - PROTOTIPOS
float leerT();
float sumTi(unsigned int n);
float sumTi2(unsigned int n);
float Tmedia();
float SigmaT();
//MAIN
int main(){
        float T[LONGITUD_T];
        printf("La temperatura media es: %f Celsius",Tmedia());
        printf("La desviacion tipica de temperatura es: %f Celsius",SigmaT());
    return 0;
}

// DEFINICION DE FUNCIONES
float leerT()
{   
    float T;
    do{
        printf("Introduzca un valor de temperatura [-50,50] Celsius: ");
        scanf("%f",&T);
        if(T==CODE)
            break; // Salida del bucle do-while
        if(T<-50||T>50)
            printf("El valor de temperatura introducido es incorrecto.\n");
    }while(T<-50||T>50);
    return T;
}

float sumTi(unsigned int n)
{
    float T = leerT();
    if(T!=CODE)
        return sumTi(n+1)+T;
    else
        return 0;
}

/*
float sumTi2()
{

}
*/