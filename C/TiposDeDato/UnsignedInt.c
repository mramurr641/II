#include <stdio.h>
int main() {
    
    unsigned int a=5; // tamanyo= 4 bytes rango 0 a 4294967295

    printf("Introduzca el valor de la variable a: ");
    scanf("%u",&a);

    printf("La variable a vale: %u \n",a);
    //printf("La variable a vale: %i \n",a);

    return 0;
}