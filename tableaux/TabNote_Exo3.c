#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header\tpexo3.h"


int main(int argc, char *argv[]) {

int n, tab[7], i, j, buff;

system("cls");

printf("Entrer la taille du tableau : ");
scanf("%d",&n);

remplirTab(tab, n); //Appel de la fonction saisie du tableau

for (i=0; i<n-1 ;i++) {
    for (j=0; j<n-i-1; j++) {
        if (tab[j] < tab[j+1]) {
            buff = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = buff;
        }
    }
}
afficherTab(tab,n); //Appel de la fonction afficher le tableau
return 0;
} //fin du main()

