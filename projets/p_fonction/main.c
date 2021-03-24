#include <stdio.h>
#include <stdbool.h>
#include "tableau.h"


//===============================================================
void main()
{
 // D�clarations
 int N;             //dimension du tableau
 int TAB[N];        //tableau donn�
 int VAL;           // valeur � rechercher
 int i;             //Compteur de boucle
 bool result;       // R�sultat final

//Saisie des donn�es

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
