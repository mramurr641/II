/* Con este programa se aprende a:
*  - Declarar una variable real, con decimales (float) [Numeros reales: ..., -2.76, -1.0, 0, 1, 6.98, ...].
*  - Inicializar una variable float.
*  - Asignar valor a una variable float en el codigo.
*  - Asignar valor a una variable float por teclado.
*  - Mostrar una variable float por terminal.
*/

#include <stdio.h>
int main() {

    float y=5.7; // Declaracion e inicializacion (asignacion inicial) de una variable real
                 // float: tipo de dato, y: nombre/identificador de la variable, =: operador asignacion, 5.7: valor de la
                 // variable y
                 // tamano: 4 bytes, rango: 3.4E-38 a 3.4E+38
    
    printf("Introduzca el valor de la variable y: "); // Antes de la siguiente instruccion es necesario mostrar un 
                                                      // mensaje similar a este al usuario
    scanf("%f",&y);                                   // Asigna a la variable y el siguiente valor introducido por 
                                                      // teclado de tipo float
    
    // Mostrar por pantalla un mensaje que incluye el valor de la variable real y
    printf("La variable y vale: %f \n",y);                                  // Con todos sus decimales
    printf("La variable y sin decimales redondeado vale: %.f \n",y);        // Sin decimales
    printf("La variable y con dos decimales redondeado vale: %.2f \n",y);   // Con dos decimales
    printf("La variable y con tres decimales redondeado vale: %.3f \n",y);  // Con tres decimales  
                                                                            // \n: salto de linea (retorno de carro)  
    return 0;
}