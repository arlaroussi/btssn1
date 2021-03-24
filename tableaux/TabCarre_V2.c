#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "../header/tableaux.h"


//Déclarartion des prototypes de fonctions
//========================================
void TabCarre(int[], int);

//Définition des fonctions

void TabCarre(int tableau[], int n) {
	int i;

	for (i=0 ; i < n ; i++)	
	 tableau[i] = tableau[i]*tableau[i];

} //Fin de la fonction

//Fonction main() : Entrée de l'exécution du programme

int main(int argc, char *argv[]) {

int n, tab[n];

system("clear");

printf("Entrer la taille du tableau : ");
scanf("%d",&n);

remplirTab(tab, n); //Appel de la fonction saisie du tableau

TabCarre(tab, n);

afficherTab(tab,n); //Appel de la fonction afficher le tableau

} //fin du main()

