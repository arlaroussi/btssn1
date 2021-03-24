#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
  char nom[20];
  char prenom[20];
  float notedst;
  float notetp;
  float moyenne;
} Personne;

    int main()
    {
        Personne *pEtud=NULL; //D�clarer une variable de type pointeur Personne

        //R�servation de l'espace m�moire
        pEtud = (Personne *) malloc(sizeof(Personne));

        //Entr�e des donn�es
        printf("Entrez le nom de la personne:\t");
        scanf("%s",&pEtud->nom);

        printf("Entrez le prenom de cette personne:\t");
        scanf("%s",&pEtud->prenom);

        printf("Entrez la note du DST:\t");
        scanf("%f",&pEtud->notedst);

        printf("Entrez la note du TP:\t");
        scanf("%f",&pEtud->notetp);


        printf("\nLa liste sans moyennes:\n");

        //Affichage de la liste initiale
            printf("\n\%s\t%s\t%.2f\t%.2f\n\n\n",pEtud->nom,pEtud->prenom,pEtud->notedst,pEtud->notetp);

        //Calcul des moyennes
            pEtud->moyenne = (pEtud->notedst*2 + pEtud->notetp)/3;

        //Affichage de la liste finale

        printf("\n\nLa liste avec moyennes:\n");

        printf("\n%s\t%s\t\%.2f\n",pEtud->nom,pEtud->prenom,pEtud->moyenne);

      return 0;

    }

