/*
Nombre: Examen 2022-2023
Autor: Miguel Ramon Urrutia
Fecha: 25/01/2024
*/

// LIBRERIAS
#include <stdio.h> // Empleado para usar printf y scanf
#include <math.h> // Empleado para usar la funcion pow

// PROGRAMA PRINCIPAL
int main(){
    // DECLARACION DE VARIABLES
    int usuario = 0;     // Usuario de acceso al SCADA
    int clave = 0;       // Clave de acceso al SCADA
    int codigo = 0;      // Selector del menu de tablas de Silestone
    float A=0,B=0,C=0;   // Reactivos de la mezcla [kg]
    int M1=0;            // Motor mezcladora
    int M2=0;            // Motor bomba 1
    int M3=0;            // Motor bomba 2
    float t=0;           // Tiempo de polimerizacion
    int aux=0;           // Variable auxiliar para modificar el t polimeracion

    // PROGRAMA
    printf("SISTEMA SCADA SILESTONE 2\n");
    printf("Introduzca el usuario: ");
    scanf("%i",&usuario);
    printf("Introduzca la clave: ");
    scanf("%i",&clave);

    if(usuario==1&&clave==222222||usuario==2&&clave==101010||usuario==3&&clave==333333)
    {
        printf("Acceso permitido.\n");
        while(1)
        {
            printf("CATALOGO DE COLORES DE SILESTONE:\n");
            printf("27. Silestone Belvedere\n");
            printf("34. Silestone Laurent\n");
            printf("89. Silestone Rojo Cehegin\n");
            printf("Introduzca el codigo del color de tabla: ");
            scanf("%i",&codigo);

            switch(codigo)
            {
                case 27: // Silestone Belvedere
                    A=3; B=7; C=0;    // Reactivos [kg]
                    M1=1; M2=0; M3=1; // Motores
                    t=18.4;           // Tiempo de polimerizacion [s]
                break;
                case 34: // Silestone Laurent
                    A=4; B=3; C=pow(B, 2);  // Reactivos [kg]
                    M1=1; M2=1; M3=0;       // Motores
                    t=23.4;                 // Tiempo de polimerizacion [s]            
                break;
                case 89: // Silestone Rojo Cehegin
                    A=1.2; B=2.5; C=(A-B)/(A/5+7)*2+B; // Reactivos [kg]
                    M1=1; M2=1; M3=1;                  // Motores
                    t=57.4;                            // Tiempo de polimerizacion [s]
                break;
                default:
                    printf("La opcion escogida no es valida.\n");
            }

            if(codigo==27||codigo==34||codigo==89) // Si el codigo es valido
            {
                printf("Desea modificar el tiempo de polimerizacion? (1:si/2:no)");
                scanf("%i",&aux);
                if(aux==1) // Responde si
                {
                    printf("Introduzca el nuevo tiempo de polimerizacion [s]: ");
                    scanf("%f",&t);
                }
                else if (aux==2) // Responde no
                    printf("Se mantiene el valor del tiempo de polimerizacion por defecto.");
                else // Respuesta del usuario incorrecta
                {
                    printf("El valor introducido no es valido. Se mantiene el valor del ");
                    printf("tiempo de polimerizacion por defecto.");
                }

                // FORMATO POR PANTALLA
                printf("La cantidad de reactivo A es= %f [kg]\n",A);
                printf("La cantidad de reactivo B es= %f [kg]\n",B);        
                printf("La cantidad de reactivo C es= %f [kg]\n",C);
                printf("El estado del motor 1 es= %i\n",M1);
                printf("El estado del motor 2 es= %i\n",M2);
                printf("El estado del motor 3 es= %i\n",M3);
                printf("El tiempo de polimerizacion es= %f [s]\n",t);
                
            }
        }

    } 
    else
        printf("Acceso denegado.");

    return 0;
}