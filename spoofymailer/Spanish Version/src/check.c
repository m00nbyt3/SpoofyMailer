#include <stdio.h>
#include "lib.h"

int check()
{
    int v = 0;
	FILE *fichero;
    fichero = fopen("src/SMTP", "r");
    
    if (fichero != NULL) {
        v = 1;
        fclose(fichero);
    }

    return(v);
}
