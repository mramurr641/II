#include <stdio.h>
int main() {
    int a;
    printf("Introduce un numero entero por teclado: ");
    scanf("%i",&a);
    if(a>0)
        printf("%i es un numero positivo",a);
        printf("\nEste mensaje se mostrara siempre");  
    return 0;
}