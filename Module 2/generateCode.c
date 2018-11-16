#include <stdio.h>
#include <stdlib.h>
#include "generateCode.h"

void generateSettings(int choix, int on, int off){

    FILE* fichier = NULL;
    fichier=fopen("param.h","w+");
    if(fichier!=NULL)
    {
        switch (choix)
            {
               case 1:
                fprintf(fichier, "#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n#define MODE 1\n#define OFF (%d)\n#define ON (%d)\nvoid all();\n\n#endif\n", off, on);
                      break;
               case 2:
                fprintf(fichier, "#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n#define MODE 2\n#define OFF (%d)\n#define ON (%d)\nvoid linear();\n\n#endif\n", off, on);
                      break;
               case 3:
                fprintf(fichier, "#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n#define MODE 3\n#define OFF (%d)\n#define ON (%d)\nvoid croco();\n\n#endif\n", off, on);
                      break;
                case 4:
                fprintf(fichier, "#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n#define MODE 4\n#define OFF (%d)\n#define ON (%d)\nvoid chenille();\n\n#endif\n", off, on);
                      break;
           }

        fclose(fichier);
    }
    else
        printf("ERROR");
    return 0;

}
