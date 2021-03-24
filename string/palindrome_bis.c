#include <stdio.h>
#include <stdlib.h>

int main() {

 char *mot;       // chaîne donnée
 char *p1,*p2;      // pointeurs de vérification
 int VRAI;          // variable logique : vrai si le mot est palindrome
 int taille;        //Taille de la chaine

 system("cls");

// Saisie des données
 printf("Entrez la taille du mot : ");
 scanf("%d", &taille);

// Réservation d'espace
 mot = (char*) malloc(taille*sizeof(char));

 if( mot == NULL ) {
     fprintf(stderr,"Allocation impossible");
     exit(EXIT_FAILURE);
}

 printf("Entrez une ligne de mot : ");

 scanf("%s",mot);

 //Placer p2 sur la dernière lettre de la chaîne
 for (p2=mot; *p2; p2++)
    ;
 p2--;

 // Contrôler si mot est un palindrome
 VRAI=1;

 for (p1=mot ; VRAI && p1<p2 ; p1++,p2--)
      if (*p1 != *p2) VRAI=0;

  /* Affichage du résultat */
 if (VRAI)
    printf("\nLa chaine \"%s\" est un palindrome.\n", mot);
 else
    printf("La chaine \"%s\" n'est pas un palindrome.\n", mot);
 return 0;
}
