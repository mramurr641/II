#include <stdio.h>

int main(){
    int n;
    printf("Introduzca el valor de n: ");
    scanf("%i",&n);
    while(n>0){
        printf("%i\n",n);
        n++;
    }
    return 0;
}