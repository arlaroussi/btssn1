#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void remplirTab(int[], int);
bool premier(int);

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
bool premier (int valeur) {

 int diviseur = 2;

 bool premier=false;

 while (diviseur <= valeur/2 && premier == false)  {
	 if (valeur % diviseur == 0)
		 premier = true;

    diviseur++;
}
 return premier;
}


 //========================================================

void main()
{
 int n, TAB[n],i, prod=1;

 system("cls");

 printf("Entrer la taille du tableau : ");
 scanf ("%d", &n);

 remplirTab(TAB, n);

 for (i=0; i<n ; i++) {
    if (premier(TAB[i])== false)
        prod *= TAB[i];
 }
 printf("\n\n\t\tLe produit des nombres premiers du tableau : %d\n\n",prod);
}
