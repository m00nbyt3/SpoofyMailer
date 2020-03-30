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
	    printf("\n                              SMTP configurator                             \n");
        printf("================================================================================");
        printf("\n      Remember it exists a default SMTP confirugation that should work      \n");
        printf("\n       In case of error, or if you want to change it, use this program      \n");
        printf("================================================================================");
	} else {
	    printf("================================================================================");
        printf("\n                   Remember to configure the SMTP data                      \n");
        printf("================================================================================");
    }
	
	
	while(0 == 0) {
	
	    printf("\n\n");
	    printf("1. Set a new SMTP configuration\n");
	    printf("2. Reset the SMTP configuration\n");
	    printf("\nSelect an option: ");
	    scanf("%d", &opt);
	
	
	    if(opt == 1) {
	    
	        system("clear");
            printf("================================================================================");
            printf("\n                        NEW SMTP CONFIGURATION                              \n");
            printf("================================================================================");
	        fichero = fopen("src/SMTP", "w");
	        
	        //Nombre del servidor
	        printf("Input the server name: ");
	        scanf("%s", frase);
	        fputs(frase, fichero);
	        fputs("\n", fichero);
	        
	        //Nombre del servidor
	        printf("Input the password: ");
	        scanf("%s", &frase);
	        fputs(frase, fichero);
	        fputs("\n", fichero);
	        
	        //Nombre del servidor
	        printf("Input the password: ");
	        scanf("%s", &frase);
	        fputs(frase, fichero);
	        
	        printf("\n\n\nSMTP configuration changed correctly \n\n\n");
	        fclose(fichero);
	        break;
	        
	    } else if(opt == 2) {
	        system("clear");
	        printf("================================================================================");
            printf("\n                        RESET THE SMTP CONFIGURATION                        \n");
            printf("================================================================================");
	        printf("\n\n\nPress enter to reset the SMTP configuration");
	        getchar();
	        getchar();
	        system("cp config/servsmtp src/");
	        system("mv src/servsmtp src/SMTP");
	        system("clear");
	        printf("\n\n\nSMTP configuration reseted correctly\n\n\n");
	        break;
	        
	    } else {
	        printf("\n\nIncorrect option, select another option\n\n");
	    }
	}
	
	
	
	return 0;
}
