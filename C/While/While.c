#include <stdio.h>

int main(){
    int n;
    printf("Introduzca el valor de n: ");
    scanf("%i",&n);
    while(n>5){
        printf("%i\n",n);
        n=n-1;
    }
    return 0;
}

