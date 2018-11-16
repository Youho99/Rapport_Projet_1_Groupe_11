#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "donnees.h"
#include "action.h"

void dataOrder(){
    char c;
    FILE* fichier = NULL;
    fichier=fopen("battements.csv","r");
    if (fichier !=NULL){
        printf("fichier comportant des informations\n\n");
        for (c=fgetc(fichier); c!= EOF; c=fgetc(fichier)){
                printf("%c", c);
        }
                printf ("\n");
    }
    else
    {
        printf("fichier inexistant\n");
    }
}

void tri_a_bulle(int tab[],int length,int choix){
    int en_desordre = 0;
    int t[10];
	while (en_desordre)
	{

		en_desordre = 1;

		for (int j = 0; j < length-1; j++)
		{

			if(t[j] > t[j+1] && choix ==1)
			{

 				int tmp = t[j+1];
 				t[j+1] = t[j];
 				t[j] = tmp;
			}

 			else if(t[j] < t[j+1] && choix == 2)
            {
              int tmp = t[j+1];
 				t[j+1] = t[j];
 				t[j] = tmp;
            }
				en_desordre = 0;

		}
	}
}

void dataTime(int tab[], int n, int valRech){
    for (int i=0; i<=n; i++){
        if (tab[i] =valRech){
            return i;
        }
    }
    printf("erreur dans le doc");
    exit(1);
}

void averagePulse(int b1, int b2)
{

    int somme=0;
    int nbr;
    int average;
    int p=0;
    int tab[10];

    while (p<b1)
    {
        p++;
        while (b1<p && p<b2){
            //somme=somme+tab[p].pulse; //necessite la lecture de données, ne fonctionnant pas encore
            p++;
            nbr++ ;
        }
    }
    average=somme/nbr;
    printf("La moyenne est %d\n", average);
}

short numbLine(short clean){
    char c=0;
    int i=1;
    FILE* fichier = NULL;
    fgetc(fichier);
    fichier=fopen("battements.csv","r");
    for (c=fgetc(fichier); c!= EOF; c=fgetc(fichier)){
        if(c=='\n'){
            i=i+1;
        }
    }
    if (fichier !=NULL){
        if (clean==0){
        printf("fichier comportant des informations\n");
        }
        fclose(fichier);
    }
    else
    {
        printf("fichier inexistant\n");
        i=0;
    }
    return i;
}

void implementTab(short length, Data tab[]){
    int i=0, a=numbChar(),b=1;
    long timeValue;
    short pulseValue;
    char string[11]="",clearS[]="",c[]=" ";
    FILE* fichier = NULL;
    fichier=fopen("battements.csv","r");
    if (fichier !=NULL){
            for (c[0]=fgetc(fichier); c[0]!= EOF; c[0]=fgetc(fichier)){
                    if (c[0]=='\n')
                        {
                            pulseValue=atol(string);
                            tab[length].pulse=pulseValue;
                            printf("Pulse :%ld, ligne %d\n",tab[length].pulse,b);
                            b++;
                            strcpy(string,clearS);

                        }

                    else
                    {
                        i++;
                        strcat(string,c);

                        if (c[0]==';'){
                            i++;
                            timeValue=atol(string);
                            tab[length].time=timeValue;
                            printf("Time : %ld, ligne %d\n",tab[length].time,b);
                            strcpy(string,clearS);

                        }

                    else{

                        if ((i-1)==a){
                            pulseValue=atol(string);
                            tab[length].pulse=pulseValue;
                            printf("Pulse :%ld, ligne %d\n",tab[length].pulse,b);

                        }

                    }

                    }
            }
            fclose(fichier);
        }
    else
    {
        printf("fichier inexistant\n");
        fclose(fichier);

    }
}
