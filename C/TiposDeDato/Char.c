/* Con este programa se aprende a:
*  - Declarar una variable caracter (char) [Caracteres: 0, ..., 9, a, ..., z,  , -, _, ...] (Ver tabla ASCII).
*  - Inicializar una variable char.
*  - Asignar valor a una variable char en el codigo.
*  - Asignar valor a una variable char por teclado.
*  - Mostrar una variable char por terminal.
*/


#include <stdio.h>
int main(){

    char a=' '; // Declaracion e inicializacion (asignacion inicial) de una variable caracter
                // char: tipo de dato, a: nombre/identificador de la variable, =: operador asignacion,  : valor de la
                // variable a
                // tamano: 1 byte, rango: 0 a 255 (Ver tabla ASCII)

    printf("Introduzca el valor de la variable a: "); // Antes de la siguiente instruccion es necesario mostrar un 
                                                      // mensaje similar a este al usuario
    scanf("%c",&a);                                   // Asigna a la variable a el siguiente valor introducido por 
                                                      // teclado de tipo char

    printf("El caracter es: %c \n", a);               // Mostrar por pantalla un mensaje que incluye el valor de la 
                                                      // variable caracter a
                                                      // \n: salto de linea (retorno de carro)
    return 0;
}