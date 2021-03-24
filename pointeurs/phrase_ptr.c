#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
 /* Déclarations */
 char *phrase, car;         // chaîne donnée
 int i,j;                   // indices courants
 int k;                     // longueur de la chaîne
 int cpt;                   // compteur des lettres
 int nbremots;              // Nombre de mots
 int temp;                  // pour l'échange des caractères

 system("cls");

 phrase = (char*) malloc (200*sizeof(char));

 /* Saisie des données */
 printf("Entrez une ligne de texte (max.200 caract\x8Ares) : ");

 gets(phrase);  // On ne peut opas utiliser scanf()

printf("\nLa phrase : %s\n", phrase);


//Compter les caractères
 for (k=0; phrase[k]; k++){}

 printf("Le texte est compos\x82 de %d caract\x8Ares.\n",k);


 // Compter nombre occurence d'une lettre dans la phrase
 cpt=0;
 printf("\nEntrer une lettre de votre choix : ");
 scanf("%c", &car);

 for (i=0; phrase[i]; i++)
     if (phrase[i]==car)
        cpt++;
 printf("Le texte contient %d lettres %c.\n",cpt, car);


 // Afficher la phrase à l'envers
 k = strlen(phrase);

  for (i=k-1; i>=0; i--)
     putchar(phrase[i]);    // ou printf("%c",phrase[i]); */
     putchar('\n');         // ou printf("\n");

 //Inverser l'ordre des caractères
 for (i=0,j=k-1 ; i<j ; i++,j--)
 {
     temp = phrase[i];
     phrase[i] = phrase[j];
     phrase[j] = temp;
 }
 puts(phrase);  // ou printf("%s\n",phrase);


 // Compter le nombre de mots dans la pharse

 i=0;

 while (i < strlen(phrase)) {

	while (i < strlen(phrase) && phrase[i] != ' ')
		i++;

	nbremots++;

	if (i <= strlen(phrase))  //Pour ne pas déborder
		i++;
}

printf("Le nombre de mots :\t%d", nbremots);

  return;
}
