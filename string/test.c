#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
 /* Déclarations */
 char *phrase, car;     // chaîne donnée
 int i,j, taille;            // indices courants
 int k;                     // longueur de la chaîne
 int cpt;                   // compteur des lettres
 int nbremots;              // Nombre de mots
 int temp;                  // pour l'échange des caractères

 system("cls");

 // Saisie des données
 printf("\nEntrez la taille de la phrase : ");
 //scanf("%d", &taille);  // On ne peut pas utiliser scanf()

 //Réservation de l'espace mémoire pour la chaine
 phrase = (char*) malloc (100 * sizeof(char));

 //Saisie des données
 printf("Entrez une ligne de texte (max.200 caract\x8Ares) : ");
 gets(phrase);  // On ne peut opas utiliser scanf()

  return;
}
