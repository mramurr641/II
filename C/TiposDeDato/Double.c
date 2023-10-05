/* Con este programa se aprende a:
*  - Declarar una variable real, con decimales (double) [Numeros reales: ..., -2.76, -1.0, 0, 1, 6.98, ...].
*  - Inicializar una variable double.
*  - Asignar valor a una variable double en el codigo.
*  - Asignar valor a una variable double por teclado.
*  - Mostrar una variable double por terminal.
*/

#include <stdio.h>
int main() {

    double z=5.4; // Declaracion e inicializacion (asignacion inicial) de una variable real
                  // double: tipo de dato, z: nombre/identificador de la variable, =: operador asignacion, 5.4: valor de la
                  // variable z
                  // tamano: 8 bytes, rango: ¿? a ¿?

    printf("Introduzca el valor de la variable z: "); // Antes de la siguiente instruccion es necesario mostrar un 
                                                      // mensaje similar a este al usuario
    scanf("%lf",&z);                                  // Asigna a la variable z el siguiente valor introducido por 
                                                      // teclado de tipo double
    
    // Mostrar por pantalla un mensaje que incluye el valor de la variable real y
    printf("La variable y vale: %f \n",z);                                  // Con todos sus decimales
    printf("La variable y sin decimales redondeado vale: %.f \n",z);        // Sin decimales
    printf("La variable y con dos decimales redondeado vale: %.2f \n",z);   // Con dos decimales
    printf("La variable y con tres decimales redondeado vale: %.3f \n",z);  // Con tres decimales  
                                                                             // \n: salto de linea (retorno de carro)  
    return 0;
}