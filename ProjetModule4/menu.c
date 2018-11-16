#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "donnees.h"
#include "action.h"


void menu()
{
    int choix, i, b1, b2;
    short nbLine;
    int tab[10];
    printf("Que veux tu faire ?\n ");
    printf("0.Sortir\n");
    printf("1.Afficher les donnees dans l’ordre du fichier .csv\n");
    printf("2.Afficher les donnees selon le temps / ");
    printf("Afficher les donnees selon le pouls\n");
    printf("3.Afficher les donnees pour un certains temps\n");
    printf("4.Afficher la moyenne de pouls dans une plage de temps \n");
    printf("5.Afficher le nombre de ligne de donnees en memoire\n");
    printf("6.Afficher le pouls maximum\n");
    printf("7.Afficher le pouls minimum\n");
    printf("8.Fonction affichant le fichier CSV en l'ayant en memoire\n");
    scanf("%d", &choix);
    switch (choix)
    {
    case 0:
        exit(0);
        break;
    case 1:
        dataOrder();
        break;
    case 2:
        printf("1.Croissant\n2.Decroissant\n");
        scanf ("%d", &choix);
        printf("La fonction se refait une beauté, elle se fait attendre...");
        //tri_a_bulle(tab,numbLine(0),choix);
        break;
    case 3:
        printf("La fonction se refait une beauté, elle se fait attendre...");
        /*printf("A quel seconde voulez vous le BPM ?\n");
        scanf("%d",&i);
        dataTime(tab, numbLine(0), i);*/
        break;
    case 4:
        printf("La fonction se refait une beauté, elle se fait attendre...");
        /*printf("Quel est votre borne 1 et votre borne 2 (en seconde)?\n ");
        printf("Borne1?\n");
        scanf("%d", &b1);
        printf("\nBorne2?\n");
        scanf("%d", &b2);
        averagePulse(b1, b2);*/
        break;
    case 5:
        nbLine=numbLine(0);
        printf("Nombre de lignes: %hd", nbLine);
            break;
    case 6:
        printf("La fonction se refait une beauté, elle se fait attendre...");
        //tri_a_bulle(tab,numbLine(0),choix);
        break;
    case 7:
        printf("La fonction se refait une beauté, elle se fait attendre...");
        //tri_a_bulle(tab,numbLine(0),choix);
        break;
    case 8:
        nbLine=numbLine(1);
        Data dataTab[nbLine];
        implementTab(nbLine,dataTab);
        break;
    }
}
