#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


//Déclarartion des prototypes de fonctions
//========================================
void TabCarre(int[], int);
void remplirTab(int *, int);
void afficherTab(int *, int);

//Définition des fonctions
//========================================
void remplirTab(int *tab, int n) {
	int i;
	
	for (i=0; i<n ; i++) 	{
		printf("\n\tEntrer élément %d : ", i+1); 
		scanf("%d",&tab[i]);
	}
		printf("\n"); 
} //Fin de la fonction 
	
void afficherTab(int *tab, int n) {
	int i;
	printf("\tTABLEAU : ");

	for (i=0; i<n ; i++) 	{
		printf("\t%d\t", tab[i]); 
	}
	printf("\n"); 
} //Fin de la fonction 

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

