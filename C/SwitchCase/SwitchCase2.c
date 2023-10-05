// LIBRERIAS
#include <stdio.h>

// MAIN
int main(){
    // DECLARACION DE VARIABLES
    int n1,n2,n3,media;
    
    // ALGORITMO
    printf("CALIFICADOR\n");
    
    // Solicitud de valores al usuario
    printf("Introduzca la nota de la primera evaluacion: ");
    scanf("%i",&n1);
    printf("Introduzca la nota de la segunda evaluacion: ");
    scanf("%i",&n2);
    printf("Introduzca la nota de la tercera evaluacion: ");
    scanf("%i",&n3);
    
    // Resultados
    media=(n1+n2+n3)/3; /* El problema de hacer la media con
                           enteros es que / libera un entero,
                           y se pierden los decimales para
                           redondear con ceil() por ejemplo
                        */
    switch(media){
        case 0:
        case 1:
        case 2:        
        case 3:
        case 4:
            printf("Insuficiente");
        break;
        case 5:
            printf("Suficiente");
        break;
        case 6:
            printf("Bien");
        break;
        case 7:
        case 8:
            printf("Notable");
        break;
        case 9:
        case 10:
            printf("Sobresaliente");
        break;
        default: // Caso por defecto: si no es ninguno de los casos anteriores
            printf("La nota no es valida.");
    }

    return 0;
}