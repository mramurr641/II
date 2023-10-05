#include <stdio.h>

int main(){
    int n=-5;
    while(n<0||n>10){
        printf("Introduzca el valor de n: ");
        scanf("%i",&n);
    }
    return 0;
}