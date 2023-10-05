// LIBRERIAS
#include <stdio.h>

// MAIN
int main(){
    // DECLARACION DE VARIABLES
    int n1,n2,select,resultado;
    
    // ALGORITMO
    printf("CALCULADORA\n");
    
    // Solicitud de valores al usuario
    printf("Introduzca el valor del primer numero: ");
    scanf("%i",&n1);
    printf("Introduzca el valor del segundo numero: ");
    scanf("%i",&n2);
    
    // Menu
    printf("MENU");
    printf("\n1. Suma");
    printf("\n2. Resta");
    printf("\n3. Multiplicacion");
    printf("\n4. Cociente de la division");
    printf("\n5. Resto de la division");

    printf("\nIntroduzca la opcion que desea: ");
    scanf("%i",&select);

    switch(select){
        case 1: // Suma
            resultado=n1+n2;
        break;
        case 2: // Resta
            resultado=n1-n2;
        break;
        case 3: // Multiplicacion
            resultado=n1*n2;
        break;
        case 4: // Cociente division
            resultado=n1/n2;
        break;
        case 5: // Resto division
            resultado=n1%n2;
        break;
        default: // Caso por defecto: si no es ninguno de los casos anteriores
            printf("La opcion escogida no es valida.");
    }
    
    // Si se ha escogido una opcion valida se muestra el resultado
    if(select==1 || select==2 || select==3 || select==4 || select==5)
        printf("El resultado es: %i",resultado);

    return 0;
}