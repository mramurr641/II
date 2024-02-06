// LIBRERIAS
#include <stdio.h>

// PROGRAMA PRINCIPAL
int main(){
    // DECLARACION DE VARIABLES
    int usuario = 0;
    int clave = 0;  
    int select = 0;     // Discrimina el rol del usuario Ingeniero/Tecnico/Supervisor
    int aux = 0;        // Pregunta activar sistema de control (1:si/2:no)
    int aux2 = 0;       // Ingeniero de control: Pregunta modificar datos de control (1:si/2:no)
    float kp = 2.5;     // Constante de proporcionalidad
    float Ti = 12/kp;   // Tiempo de integracion [s]
    float Td = Ti/kp;   // Tiempo derivativo [s]
    int aux3 = 0;       // Pregunta cerrar sesion
    int i = 0;          // Contador inicio sesion ingeniero
    int j = 0;          // Contador inicio sesion tecnico
    int k = 0;          // Contador inicio sesion supervisor

    // PROGRAMA
    do{
        printf("SCADA DE DEKTON\n");
        do{
            printf("Introduzca sus credenciales de acceso:\n");
            printf("Usuario: ");
            scanf("%i",&usuario);
            printf("Clave: ");
            scanf("%i",&clave);
            if(!(usuario==1&&clave==111||usuario==2&&clave==222||usuario==3&&clave==333))
                printf("Acceso denegado. El usuario o la clave son incorrectos. Vuelva a inroducirlos.\n");
        }while(!(usuario==1&&clave==111||usuario==2&&clave==222||usuario==3&&clave==333));
        
        if(usuario==1&&clave==111) // Ingeniero de control
        {
            select=1;
            i++; // Incremento contador ingeniero inicio sesion
        }
        else if(usuario==2&&clave==222) // Tecnico de control
        {
            select=2;
            j++; // Incremento contador ingeniero inicio sesion
        }
        else if(usuario==3&&clave==333) // Supervisor
        {
            select=3;
            k++; // Incremento contador ingeniero inicio sesion
        }
        
        switch(select){
            case 1: // Ingeniero
                printf("Usted se ha identificado como Ingeniero de Control\n");
                printf("Desea activar el sistema de control?(1:si/2:no)");
                scanf("%i",&aux);
                if(aux==1) // Sistema de control: activado
                {
                    printf("Sistema de control activado.\n");
                    printf("Desea modificar los parametros de control?(1:si/2:no)");
                    scanf("%i",&aux2);
                    if(aux2==1) // Modificacion de parametros de control
                    {
                        printf("Introduzca el nuevo valor de kp: ");
                        scanf("%f",&kp);
                        printf("Introduzca el nuevo valor de Ti: ");
                        scanf("%f",&Ti);
                        printf("Introduzca el nuevo valor de Td: ");
                        scanf("%f",&Td);                    
                    }
                    else
                        printf("Se han configurado los parametros de control por defecto");
                }
                else // Sistema de control: desactivado
                    printf("Sistema de control desactivado.\n");
            break;
            case 2: // Tecnico de control
                printf("Usted se ha identificado como Tecnico de Control\n");
                printf("Desea activar el sistema de control?(1:si/2:no)");
                scanf("%i",&aux);
                if(aux==1) // Sistema de control: activado
                {
                    printf("Sistema de control activado.\n");
                    
                    printf("kp: %f\n",kp);
                    printf("Ti: %f\n",Ti);
                    printf("Td: %f\n",Td);
                    
                    printf("kp=%f, Ti=%f, Td=%f\n",kp,Ti,Td);
                }
                else // Sistema de control: desactivado
                    printf("Sistema de control desactivado.\n");
            break;
            case 3: // Supervisor
                printf("Usted se ha identificado como Supervisor\n");
                printf("Desea activar el sistema de control?(1:si/2:no)");
                scanf("%i",&aux);
                if(aux==1) // Sistema de control: activado
                    printf("Sistema de control activado.\n");
                else // Sistema de control: desactivado
                    printf("Sistema de control desactivado.\n");
            break;
            default:
                printf("El rol introducido no es valido.\n");
        }
        printf("Desea apagar o cerrar sesion?(0:Apagar/1:Cerrar sesion): ");
        scanf("%i",&aux3);

        // FORMATO AL CERRAR SESION
        printf("Inicio de sesion como Ingeniero de control: %i\n",i);
        printf("Inicio de sesion como Tecnico de control: %i\n",j);
        printf("Inicio de sesion como Supervisor: %i\n",k);

    }while(aux3);

    // FORMATO AL APAGAR
    printf("Inicio de sesion como Ingeniero de control: %i\n",i);
    printf("Inicio de sesion como Tecnico de control: %i\n",j);
    printf("Inicio de sesion como Supervisor: %i\n",k);

    return 0;
}