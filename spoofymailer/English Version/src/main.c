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
        printf("\n                       Error with SMTP configuration                        \n");
        printf("================================================================================");
        system("./configure_SMTP");
        verify = check();
    }
    
	printf("\nWelcome to Spoofy Mailer...\n\n");
	printf("   ▄▄▄▄▄   █ ▄▄  ████▄ ████▄ ▄████ ▀▄    ▄    █▀▄▀█ ██   ▄█ █     ▄███▄   █▄▄▄▄ ");
	printf("  █     ▀▄ █   █ █   █ █   █ █▀   ▀  █  █     █ █ █ █ █  ██ █     █▀   ▀  █  ▄▀ ");
	printf("▄  ▀▀▀▀▄   █▀▀▀  █   █ █   █ █▀▀      ▀█      █ ▄ █ █▄▄█ ██ █     ██▄▄    █▀▀▌  ");
	printf(" ▀▄▄▄▄▀    █     ▀████ ▀████ █        █       █   █ █  █ ▐█ ███▄  █▄   ▄▀ █  █  ");
	printf("            █                 █     ▄▀           █     █  ▐     ▀ ▀███▀     █   ");
	printf("             ▀                 ▀                ▀     █                    ▀    ");
	printf("                                                     ▀                          ");
	printf("\n");
	printf("================================================================================");
    printf("\n                         SMTP correctly configured                          \n");
    printf("================================================================================");
	
    
	//Variables
	char from[100];
	char to[100];
	char name[100];
	char subject[100];
	int opt = 0;
	

	printf("\n\nInput the data for sending the mail...\n\n");
	
	//Enviar a...
	printf("Send to: ");
	scanf("%s", to);
	printf("\n");
	
	//Enviar desde...
	printf("Send from:\n");
	printf("-Name: ");
	__fpurge(stdin);
	fgets(name, 100, stdin);
	strtok(name, "\n");
	printf("-Email: ");
	scanf("%s", from);
	printf("\n");
	
	//Asunto...
	printf("Subject: ");
	__fpurge(stdin);
	fgets(subject, 100, stdin);
	strtok(subject, "\n");


	//Mensaje...
	while(opt == 0) {
	    printf("\n\nSend mail:\n");
	    printf("1. HTML document\n");
	    printf("2. TXT document\n");
	    printf("3. Write the message here (not recommended)\n");
	    
	    printf("\nSelect an option: ");
	    scanf("%d", &opt);
	    printf("\n");
	    
	    if(opt == 0)
	        printf("Error, introduce another option");
	        
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
