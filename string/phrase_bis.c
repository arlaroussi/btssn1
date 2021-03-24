#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main()
{
 // Déclarations
 char *phrase, car;         // chaîne donnée
 int i,j, taille;                   // indices courants
 int k;                     // longueur de la chaîne
 int cpt;                   // compteur des lettres
 int nbremots;              // Nombre de mots

 system("cls");

 printf("Entrez la taille du texte : ");
 scanf("%d", &taille);

 //phrase = (char*) malloc (taille*sizeof(char));

 // Saisie des données
 printf("Entrez une ligne de texte (max.100 caract\x8Ares) : ");

 fgets(phrase,100,stdin);              // On ne peut pas utiliser scanf()

printf("La phrase : %s", phrase);

return;
}
