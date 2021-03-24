#include <stdio.h>
#include <stdbool.h>

bool rechercherVal(int*, int, int);
void remplirTab(int[], int);
void afficherTab(int[], int);

//===============================================================
bool rechercherVal(int* T, int taille, int V) {

bool trouve = false;
int i;

for (i=0 ; (i<taille && trouve==false); i++) {
       if (T[i]==V)
           trouve = true;
}
return trouve;
} //Fin de la fonction rechercherVal

//===============================================================
void remplirTab(int tableau[], int n) {

	int i;

	for (i=0 ; i < n ; i++)
	{
		printf("\nEl\x82ment %d : ",i+1);
		scanf("%d",&tableau[i]);
	}
	return;
}

//==============================================================
void afficherTab(int tableau[], int n) {

	int i;
    printf("\n\n");
	for (i=0 ; i < n ; i++)
	{
		printf("\t%d",tableau[i]);
	}
	return;
} //Fin de la fonction afficherTab

//===============================================================
void main()
{
 // Déclarations
 int N;             //dimension du tableau
 int TAB[N];        //tableau donné
 int VAL;           // valeur à rechercher
 int i;             //Compteur de boucle
 bool result;       // Résultat final

//Saisie des données

//=====================================================
printf("\nDimension du tableau (max.30) : ");
scanf("%d", &N);

remplirTab(TAB,N);

printf("\n\tEl\x82ment \x83 rechercher : ");
scanf("%d", &VAL);

// Affichage du tableau
afficherTab(TAB,N);

result = rechercherVal(TAB,N, VAL);

 if (result == true)
    printf("\n\n\tLa valeur %d existe dans le tableau\n\n", VAL);
 else
    printf("\n\n\tLa valeur %d n'existe pas dans le tableau\n\n", VAL);
 return;
}
