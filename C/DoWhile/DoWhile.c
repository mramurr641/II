#include <stdio.h>

int main(){
    int n;
    do{
        printf("Introduzca el valor de n: ");
        scanf("%i",&n);
    }while(n<0||n>10);
    return 0;
}
