#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main (int argc, char* argv[]) {

 int valeur, som_diviseur, diviseur ;

 //Entrée des données du problème

 system("clear");

 printf("Entrer la valeur de valeur : ");

 scanf ("%d", &valeur);

 som_diviseur = 1;

 for (diviseur = 2; diviseur <= valeur/2 ; diviseur++)
 {
	 if (valeur % diviseur == 0)
	 {
		 som_diviseur += diviseur;
	 }
 }

 if (valeur == som_diviseur)
 {
	 printf("\nLe nombre %d est un nombre parfait\n\n", valeur);
 }
 else
 {
	 printf("\nLe nombre %d n'est pas un nombre parfait\n\n", valeur);
 }

 } //Fin du main()
