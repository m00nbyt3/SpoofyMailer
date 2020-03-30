#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

//Funcion de enviar mensaje HTML
void s_here(char to[], char from[], char name[], char subject[])
{
    FILE *fichero;
    
    //Variables
    char server[100];
    char user[100];
    char password[200];
    char message[5000];
    char send[1000] = "sendemail";
    
    
    //Obtains
    fichero = fopen("src/SMTP","r");
    fgets(server, 100, fichero);
    strtok(server, "\n");
    fgets(user, 100, fichero);
    strtok(user, "\n");
    fgets(password, 200, fichero);
    strtok(password, "\n");
    
    //Visualizar datos SMTP
    //printf("%s", server);
    //printf("%s", user);
    //printf("%s", password);

    printf("Write the message: ");
    __fpurge(stdin);
    fgets(message, 5000, stdin);
    strtok(message, "\n");
    
    strcat(send, " -s ");
    strcat(send, server);
    
    strcat(send, " -xu ");
    strcat(send, user);
    
    strcat(send, " -xp ");
    strcat(send, password);
    
    
    strcat(send, " -f '");
    strcat(send, from);
    
    strcat(send, "' -t '");
    strcat(send, to);
    
    strcat(send, "' -u '");
    strcat(send, subject);
    
    strcat(send, "' -m '");
    strcat(send, message);
    
    strcat(send, "' -o message-header='From: ");
    strcat(send, name);
	
	strcat(send, " <");
    strcat(send, from);
    strcat(send, " >'");
    
    printf("\n\n");
    //printf("%s", send);
    system(send);
    
    fclose(fichero);
}
