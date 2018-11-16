#include "menu.h"
#include "generateCode.h"

void menuLed() {
    int choix, on, off;
    printf("Comment souhaitez vous configurer les LED ?\n ");
    printf("1.Allumer/eteindre le tout\n");
    printf("2.Allumer/eteindre de maniere lineaire\n");
    printf("3.Allumer mode croco\n");
    printf("4.Allumer mode chenille\n");
    scanf("%d", &choix);
    printf("combien de temps la Led doit elle rester allummée ?(en ms)\n");
    scanf("%d", &on);
    printf("combien de temps la Led doit elle rester éteinte?(en ms)\n");
    scanf("%d", &off);
    generateSettings(choix, on, off);

}
