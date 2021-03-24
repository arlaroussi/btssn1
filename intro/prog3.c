#include <stdio.h>
#include <string.h>

//Déclaration des prototypes de fonctions

int produit(int, int);
void imprime_tab(int *, int);

// Définition des fonctions

int produit (int a, int b) //Première fonction
{
    int prod = 1;
    prod = a * b;
    return(prod);
}

void imprime_tab (int *tab, int nb_elements)  //Deuxième fonction
{
	int i;
	for ( i = 0; i < nb_elements; i++)
		printf("%d \t",tab[i]);
	printf("\n");
	return;
}

//Fonction main
void main (int argc, char* argv[]) {

 int x, y, result ;
 
 int tableau[] = {10, 15, 20, 25, 30 };
 
 //Entrée des données du problème
 
 printf("Entrer la valeur de x : ");
 scanf ("%d", &x);
 
 printf("Entrer la valeur de y : ");
 scanf ("%d", &y);
 
 result = produit(x,y);
 
 printf("Résultat : %d\n", result);
 
 imprime_tab(tableau, 5);
 
}
