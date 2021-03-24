#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
  char *nom;
  char *prenom;
  float notedst;
  float notetp;
  float moyenne;
} Personne;

    int main()
    {
        int n,i, nTaille, pTaille;
        Personne *pEtud;

        printf("Donnez le nombre de personnes a lire:\n");
        scanf("%d",&n);

        for(i=0;i<n;i++) {
        pEtud[i] = (Personne *) malloc(n*sizeof(Personne));

        if( pEtud[i] == NULL ) {
            fprintf(stderr,"Allocation impossible");
            exit(EXIT_FAILURE);
        }
        }
        printf("Donnez la taille max du nom:\n");
        scanf("%d",&nTaille);

        printf("Donnez la taille max du prénom:\n");
        scanf("%d",&pTaille);

        for(i=0;i<n;i++) {

            pEtud[i]->nom = (char *) calloc(nTaille, sizeof(char));
            printf("Entrez le nom  de la personne N%d:\t",i+1);
            scanf("%s",pEtud[i].nom);

            pEtud[i]->prenom = (char *) calloc(pTaille, sizeof(char));
            printf("Entrez le prenom de cette personne:\t");
            scanf("%s",pEtud[i].prenom);

            printf("Entrez la note du DST:\t");
            scanf("%f",&pEtud[i].notedst);

            printf("Entrez la note du TP:\t");
            scanf("%f",&pEtud[i].notetp);
        }
        printf("\nLa liste sans moyennes:\n");

        //Affichage de la liste initiale
        for(i=0;i<n;i++)
            printf("%s\t%s\t%.2f\t%.2f\n",pEtud[i].nom,pEtud[i].prenom,pEtud[i].notedst,pEtud[i].notetp);

        //Calcul des moyennes
        for(i=0;i<n;i++)
            pEtud[i].moyenne = (pEtud[i].notedst*2+pEtud[i].notetp)/3;

        //Affichage de la liste finale

        printf("\n\nLa liste avec moyennes:\n");

        for(i=0;i<n;i++)
            printf("%s\t%s\t\%.2f\t%.2f\t%.2f\n",pEtud[i].nom,pEtud[i].prenom,pEtud[i].notedst,pEtud[i].notetp,pEtud[i]moyenne);

       return EXIT_SUCCESS;
    }

