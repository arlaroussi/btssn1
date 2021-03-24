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
        int n,i;
        Personne *pEtud[n];

        printf("Donnez le nombre de personnes a lire:\n");
        scanf("%d",&n);

         for(i=0;i<n;i++)
            pEtud[i] = (Personne *)malloc(n*sizeof(Personne));

        for(i=0;i<n;i++)
        {
            printf("Entrez le nom  de la personne N%d:\t",i+1);
            scanf("%s",&pEtud[i]->nom);

            printf("Entrez le prenom de cette personne:\t");
            scanf("%s",&pEtud[i]->prenom);

            printf("Entrez la note du DST:\t");
            scanf("%f",&pEtud[i]->notedst);

            printf("Entrez la note du TP:\t");
            scanf("%f",&pEtud[i]->notetp);
        }

        printf("\nLa liste sans moyennes:\n");

        //Affichage de la liste initiale
        for(i=0;i<n;i++)
            printf("%s\t%s\t%.2f\t%.2f\n",pEtud[i]->nom,pEtud[i]->prenom,pEtud[i]->notedst,pEtud[i]->notetp);

        //Calcul des moyennes
        for(i=0;i<n;i++)
            pEtud[i]->moyenne = (pEtud[i]->notedst*2+pEtud[i]->notetp)/3;

        //Affichage de la liste finale

        printf("\n\nLa liste avec moyennes:\n");

        for(i=0;i<n;i++)
            printf("%s\t%s\t\%.2f\t%.2f\t%.2f\n",pEtud[i]->nom,pEtud[i]->prenom,pEtud[i]->notedst,pEtud[i]->notetp,pEtud[i]->moyenne);

       return 0;
    }

