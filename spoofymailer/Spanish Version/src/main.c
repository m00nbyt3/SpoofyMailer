#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#include "lib.h"

int main()
{
    system("clear");
    int verify = check();
    while(verify ==0) {
        printf("================================================================================");
        printf("\n                       Error en la configuracion SMTP                       \n");
        printf("================================================================================");
        system("./configure_SMTP");
        verify = check();
    }
    
	printf("\nBienvenido a Spoofy Mailer...\n\n");
	printf("   ▄▄▄▄▄   █ ▄▄  ████▄ ████▄ ▄████ ▀▄    ▄    █▀▄▀█ ██   ▄█ █     ▄███▄   █▄▄▄▄ ");
	printf("  █     ▀▄ █   █ █   █ █   █ █▀   ▀  █  █     █ █ █ █ █  ██ █     █▀   ▀  █  ▄▀ ");
	printf("▄  ▀▀▀▀▄   █▀▀▀  █   █ █   █ █▀▀      ▀█      █ ▄ █ █▄▄█ ██ █     ██▄▄    █▀▀▌  ");
	printf(" ▀▄▄▄▄▀    █     ▀████ ▀████ █        █       █   █ █  █ ▐█ ███▄  █▄   ▄▀ █  █  ");
	printf("            █                 █     ▄▀           █     █  ▐     ▀ ▀███▀     █   ");
	printf("             ▀                 ▀                ▀     █                    ▀    ");
	printf("                                                     ▀                          ");
	printf("\n");
    printf("================================================================================");
    printf("\n                      SMTP configurado correctamente                        \n");
    printf("================================================================================");

    
	//Variables
	char from[100];
	char to[100];
	char name[100];
	char subject[100];
	int opt = 0;
	

	printf("\n\nIntroduzca los datos para enviar el mail...\n\n");
	
	//Enviar a...
	printf("Enviar a: ");
	scanf("%s", to);
	printf("\n");
	
	//Enviar desde...
	printf("Enviar desde:\n");
	printf("-Nombre: ");
	__fpurge(stdin);
	fgets(name, 100, stdin);
	strtok(name, "\n");
	printf("-Email: ");
	scanf("%s", from);
	printf("\n");
	
	//Asunto...
	printf("Asunto: ");
	__fpurge(stdin);
	fgets(subject, 100, stdin);
	strtok(subject, "\n");


	//Mensaje...
	while(opt == 0) {
	    printf("\n\nEnviar mensaje:\n");
	    printf("1. Documento HTML\n");
	    printf("2. Documento TXT\n");
	    printf("3. Escribir aqui el mensaje (no recomendado)\n");
	    
	    printf("\nElije una opcion: ");
	    scanf("%d", &opt);
	    printf("\n");
	    
	    if(opt == 0)
	        printf("Error, introduce otra opcion");
	        
	    if(opt == 1) {
	        s_html(to, from, name, subject);
	        break;
        }
    
        if(opt == 2) {
	        s_txt(to, from, name, subject);
	        break;
        }
        
        if(opt == 3) {
	        s_here(to, from, name, subject);
	        break;
        }
	}
	return 0;
}
