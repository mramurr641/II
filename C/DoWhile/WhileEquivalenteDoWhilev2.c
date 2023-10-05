#include <stdio.h>

int main(){
    int n;
    printf("Introduzca el valor de n: ");
    scanf("%i",&n);
    while(n<0||n>10){
        printf("Introduzca el valor de n: ");
        scanf("%i",&n);
    }
    return 0;
}