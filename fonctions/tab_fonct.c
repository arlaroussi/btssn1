#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int minimum(int[], int);
int maximum(int *, int);
void remplirTab(int*, int);
void afficherTab(int*, int);

void remplirTab(int tableau[], int n) {

	int i;

	for (i=0 ; i < n ; i++)
	{
		printf("\nElément %d ",i+1);
		scanf("%d",&tableau[i]);
	}
	return;
}

void afficherTab(int tableau[], int n) {

	int i;

	for (i=0 ; i < n ; i++)
	{
		printf("\nElément %d ",tableau[i]);
	}
	return;
}

int minimum(int tableau[], int n) {

	int i, min;

	min = tableau[0];   //Maximum potentiel

	for (i=1 ; i < n ; i++)
	{
		if (tableau[i] < min) {
			min = tableau[i];  //Nouveau maximum potentiel
		}
	}
	return min;
}

int maximum(int tableau[], int n) {

	int i, max;

	max = tableau[0];   //Maximum potentiel

	for (i=1 ; i < n ; i++)
	{
		if (tableau[i] > max) {
			max = tableau[i];  //Nouveau maximum potentiel
		}
	}
	return max;
}


//Fonction entrée programme

int main(int argc, char *argv[]) {

int min, max, n;

int tab[n];

system("cls");

printf("Entrer la taille du tableau : ");
scanf("%d",&n);

remplirTab(tab, n);

afficherTab(tab,n);

min = minimum(tab, n); //Appel de la fonction minimum

max = maximum(tab, n); //Appel de la fonction maximum


printf("\n\tLe minimum : %d\n",min);

printf("\n\tLe maximum : %d\n",max);

return 0;
}
