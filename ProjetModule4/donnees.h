#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED

typedef struct Donnees{
    long time;
    short pulse;
} Data;

void dataOrder();
void tri_a_bulle(int tab[],int length,int choix);
void dataTime(int tab[], int n, int valRech);
void averagePulse(int b1,int b2);
short numbLine(short clean);
void implementTab(short length, Data tab[]);

#endif // DONNEES_H_INCLUDED
