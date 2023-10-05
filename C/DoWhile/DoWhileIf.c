#include <stdio.h>

int main(){
    int nota;
    do{
        printf("Introduzca el valor de la nota: ");
        scanf("%i",&nota);
        if(nota<0||nota>10)
        {
            printf("La nota debe tener un valor comprendido");
            printf(" entre 0 y 10, incluidos estos.\n");
        }
    }while(nota<0||nota>10);
    printf("La nota es %i.",nota);
    return 0;
}