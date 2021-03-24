#include <stdio.h>
#include <string.h>

void remplirTab(int[], int);
void parfait(int);

//==================================================
void remplirTab(int tableau[], int n) {

	int i;

	for (i=0; i < n ; i++)
	{
		printf("\nEl\x82ment %d : ",i+1);
		scanf("%d",&tableau[i]);
	}
	return;
}

//==================================================
void parfait (int valeur) {

 int som_diviseur, diviseur;

 //Entrée des données du problème

 som_diviseur = 1;

 for (diviseur = 2; diviseur <= valeur/2 ; diviseur++)  {
	 if (valeur % diviseur == 0)
		 som_diviseur += diviseur;
}

 if (valeur == som_diviseur)
	 printf("\nLe nombre %d est un nombre parfait\n", valeur);
 } //Fin du main()


 //========================================================

void main()
{
 int nbre, n, TAB[n],i;

 system("cls");

 printf("Entrer la taille du tableau : ");
 scanf ("%d", &n);

 remplirTab(TAB, n);

 for (i=0; i<=n ; i++) {
    parfait(TAB[i]);
 }
}
