#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "action.h"

int numbChar()
{
    char c;
    int x=0;
    FILE* fichier = NULL;
    fgetc(fichier);
    fichier=fopen("battements.csv","r");
    if (fichier !=NULL)
    {
        printf("fichier comportant des informations\n\n");
        for (c=fgetc(fichier); c!= EOF; c=fgetc(fichier))
        {
            x++;
        }
        return x;
    }
}
