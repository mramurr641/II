// LIBRERIAS
#include <stdio.h>
// MAIN
int main(){
    // DECLARACION DE VARIABLES
    int select=0;int flag1=0;int flag2=0;int flag3=0;int loop=1;
    // BUCLE DE REPETICION
    do{ 
        do{
            printf("MENU\n");
            printf("1. Opcion 1\n");
            printf("2. Opcion 2\n");
            printf("3. Opcion 3\n");
            printf("Escoja la opcion que desea ejecutar: ");
            scanf("%i",&select);
            if(select!=1&&select!=2&&select!=3)
                printf("La opcion escogida no es correcta. Escoja una de entre las opciones del menu.\n");
        }while(select!=1&&select!=2&&select!=3);

        switch(select){
            case 1:
                printf("Ha escogido la Opcion 1. Ha activado la flag 1.\n");
                flag1=1;
            break;
            case 2:
                printf("Ha escogido la Opcion 2. Ha activado la flag 2.\n");
                flag2=1;
            break;
            case 3:
                printf("Ha escogido la Opcion 3. Ha activado la flag 3.\n");
                flag3=1;
            break;
            default:
                    printf("Usted no deberia estar leyendo este texto.\n");
        }

        if(flag1&&flag2&&flag3)
            loop=0;
        else
        {
            printf("Recuerde que el programa se ejecutara hasta que haya escogido,");
            printf(" al menos una vez, cada una de las tres opciones.\n");
        }

    }while(loop);
    printf("Ha activado todas las flags.\nFIN DEL PROGRAMA");
    return 0;
}