// LIBRERIAS
#include <stdio.h>
// MAIN
int main(){
    // DECLARACION DE VARIABLES
    int n1,n2,suma,loop;
    // TITULO
    printf("CALCULADORA\n");
    // BUCLE DE REPETICION
    do{ 
        // SOLICITUD DE DATOS
        printf("Introduzca el primer sumando: ");
        scanf("%i",&n1);
        printf("Introduzca el segundo sumando: ");
        scanf("%i",&n2);
        // PROCESAMIENTO
        suma=n1+n2;
        // FORMATEO
        printf("El resultado de la suma es %i\n",suma);
        // SOLICITUD DE REPETICION DEL PROGRAMA
        printf("Indique si desea repetir la ejecucion del programa (Si:1/No:0): ");
        scanf("%i",&loop);
    }while(loop);
    return 0;
}