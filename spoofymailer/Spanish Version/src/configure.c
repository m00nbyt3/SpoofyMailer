#include <stdio.h>
#include <stdlib.h>
#include "lib2.h"

int main()
{
    //Variables
    int opt = 0;
    FILE *fichero;
    char frase[100];
    

    int verify = check();
	if(verify == 1) {
	    system("clear");
	    printf("\n                            Configurador de SMTP                            \n");
        printf("================================================================================");
        printf("\n       Recuerde que existe una configuracion predeterminada de SMTP         \n");
        printf("\n      En caso de error o de querer cambiarla , utilice este programa        \n");
        printf("================================================================================");
    } else {
	    printf("================================================================================");
        printf("\n                   Recuerde configurarar los datos SMTP                     \n");
        printf("================================================================================");
    }
	
	
    while(0 == 0) {
    
	    printf("\n\n");
	    printf("1. Establecer una nueva configuracion SMTP\n");
	    printf("2. Reestablecer la configuracion SMTP original\n");
	    printf("\nSeleccione una opcion: ");
	    scanf("%d", &opt);
	

	    if(opt == 1) {
	    
	        system("clear");
            printf("================================================================================");
            printf("\n                      NUEVA CONFIGURACION SMTP                              \n");
            printf("================================================================================");
	        fichero = fopen("src/SMTP", "w");
	        
	        //Nombre del servidor
	        printf("Introduzca el nombre del servidor: ");
	        scanf("%s", frase);
	        fputs(frase, fichero);
	        fputs("\n", fichero);
	        
	        //Nombre del servidor
	        printf("Introduzca el nombre de usuario: ");
	        scanf("%s", &frase);
	        fputs(frase, fichero);
	        fputs("\n", fichero);
	        
	        //Nombre del servidor
	        printf("Introduzca la contraseña: ");
	        scanf("%s", &frase);
	        fputs(frase, fichero);
	        
	        printf("\n\n\nConfiguracion SMTP establecida correctamente\n\n\n");
	        fclose(fichero);
	        break;
	        
	    } else if(opt == 2) {
	        system("clear");
	        printf("================================================================================");
            printf("\n              Reestablecer la configuracion SMTP original                   \n");
            printf("================================================================================");
	        printf("\n\n\nPulse ENTER para reestablecer la configuracion SMTP original...");
	        getchar();
	        getchar();
	        system("cp config/servsmtp src/");
	        system("mv src/servsmtp src/SMTP");
	        system("clear");
	        printf("\n\n\nConfiguracion SMTP reestablecida\n\n\n");
	        break;
	        
	    } else {
	        printf("\n\nOpcion incorrecta, seleccione otra opcion...\n\n");
	    }
	}
	
	
	
	return 0;
}
