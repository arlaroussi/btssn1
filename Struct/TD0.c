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
        Personne t; //Déclarer une variable de type Personne

        //Entrée des données
        printf("Entrez le nom de cette personne:\t");
        scanf("%s",&t.nom);

        printf("Entrez le prenom de cette personne:\t");
        scanf("%s",&t.prenom);

        printf("Entrez la note du DST:\t");
        scanf("%f",&t.notedst);

        printf("Entrez la note du TP:\t");
        scanf("%f",&t.notetp);


        printf("\nLa liste sans moyennes:\n");

        //Affichage de la liste initiale
            printf("\n\%s\t%s\t%.2f\t%.2f\n\n\n",t.nom,t.prenom,t.notedst,t.notetp);

        //Calcul des moyennes
            t.moyenne = (t.notedst*2+t.notetp)/3;

        //Affichage de la liste finale

        printf("\n\nLa liste avec moyennes:\n");

        printf("\n%s\t%s\t\%.2f\t%.2f\t%.2f\n",t.nom,t.prenom,t.notedst,t.notetp,t.moyenne);


      return 0;

    }

