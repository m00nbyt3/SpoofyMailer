#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funcion de enviar mensaje HTML
void s_txt(char to[], char from[], char name[], char subject[])
{
    FILE *fichero;
    
    //Variables
    char server[100];
    char user[100];
    char password[200];
    char file[100];
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

    //Verificacion de fichero
    while(0 == 0) {
	    printf("Input the TXT file name ");
	    printf("(example: message.txt): ");
	    scanf("%s", file);
	    
	    fichero = fopen(file,"r");
	    if (fichero == NULL) {
            printf("\nThe file does not exist!!!\n");
            printf("Remember to put the file onto the same directory of the program\n\n");
            } else {
            break;
        }         
    }
    
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
    
    strcat(send, "' -o message-content-type=text -o message-file=");
    strcat(send, file);
    
    strcat(send, " -o message-header='From: ");
    strcat(send, name);
	
	strcat(send, " <");
    strcat(send, from);
    strcat(send, " >'");
    
    printf("\n\n");
    //printf("%s", send);
    system(send);
    
    fclose(fichero);
}
