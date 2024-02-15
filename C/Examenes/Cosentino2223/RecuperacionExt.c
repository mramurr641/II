/*
Codigo: Recuperacion Extraordinaria Junio 22-23
Autor: Miguel Ramon Urrutia
Fecha: 15/02/2024
*/

// LIBRERIAS
#include <stdio.h>
#include <math.h>

// PROGRAMA PRINCIPAL
int main(){
    // DECLARACION DE VARIABLES
    int select = 0;
    float code = 0;
    float op1 = 10/4+(6+1)/5;
    float op2 = (99+(6+1)/7)/((14+6)/6);
    float op3 = pow(7,3);
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    int clave1 = 0;
    int clave2 = 0;
    int clave3 = 0;
    int code2 = 0;

    // PROGRAMA
    while(1){
        printf("SCAPE ROOM COSENTINO\n");
        flag1=0;
        flag2=0;
        flag3=0;
        
        do{
            // MENU
            printf("Menu:\n");
            printf("1. Prueba 1\n");
            printf("2. Prueba 2\n");
            printf("3. Prueba 3\n");
            printf(" Introduzca la prueba que desee superar: ");
            scanf("%i",&select);

            switch(select){
                case 1: // Prueba 1
                    printf("PRUEBA 1\n");
                    printf("Introduzca el codigo: \n");
                    scanf("%i",&code);
                    if(code>op1&&code<op2&&code!=op3)
                    {
                        printf("La primera prueba ha sido superada.\n");
                        flag1=1;
                    }
                    else
                        printf("La primera prueba no ha sido superada.\n");
                break;
                case 2: // Prueba 2
                    printf("Introduzca las 3 claves en orden: ");
                    printf("Primera clave: ");
                    scanf("%i",&clave1);
                    printf("Segunda clave: ");
                    scanf("%i",&clave2);     
                    printf("Tercera clave: ");
                    scanf("%i",&clave3);
                    if(clave1==1&&clave2==2&&clave3==3)
                    {   
                        printf("La segunda prueba ha sido superada.");
                        flag2=1;
                    }
                    else
                        printf("La segunda prueba no ha sido superada.\n");
                break;
                case 3: // Prueba 3
                    for(int i=1;i<=100;i=i+3)
                    {
                        if(i%2) // Si el numero es impar
                            printf("%i, ",i);
                    }
                    printf("Introduzca el codigo: \n");
                    scanf("%i",&code2);
                    if(code2==37)
                    {
                        printf("La tercera prueba ha sido superada.\n");
                        flag3=1;
                    }
                    else
                        printf("La tercera prueba no ha sido superada.\n");
                break;
                default:
                    printf("La opcion escogida no es correcta.\n");
            }
        }while(!(flag1&&flag2&&flag3));

        printf("Enhorabuena, ha escapado airoso del Scape Room Cosentino");
    }

    return 0;
}