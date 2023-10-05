/* Con este programa se aprende a:
*  - Declarar una variable entera, sin decimales (int) [Numeros enteros: ..., -2, -1, 0, 1, 2, ...].
*  - Inicializar una variable entera.
*  - Asignar valor a una variable entera en el codigo.
*  - Asignar valor a una variable entera por teclado.
*  - Mostrar una variable int por terminal.
*/

#include <stdio.h>
int main() {

    int x=5; // Declaracion e inicializacion (asignacion inicial) de una variable entera
             // int: tipo de dato, x: nombre/identificador de la variable, =: operador asignacion, 0: valor de la 
             // variable x
             // tamano: 2 bytes, rango: -32768 a 32767
    
    printf("Introduzca el valor de la variable x: "); // Antes de la siguiente instruccion es necesario mostrar un 
                                                      // mensaje similar a este al usuario
    scanf("%i",&x);                                   // Asigna a la variable x el siguiente valor introducido por 
                                                      // teclado de tipo int
    
    printf("La variable x vale: %i \n",x);            // Mostrar por pantalla un mensaje que incluye el valor de la 
                                                      // variable entera x
                                                      // \n: salto de linea (retorno de carro)  
    return 0;
}