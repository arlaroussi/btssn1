#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
  char *nom;
  char *prenom;
  int age;
} Personne;
    int main()
    {
        Personne *t;
        int n,i,k, tnom, tprenom;

        printf("Donnez le nombre de personnes a lire:\n");
        scanf("%d",&n);

        t = (Personne *)calloc(n+1,sizeof(Personne));

        printf("Entrer la taille du nom :\t");
        scanf("%d",&tnom);

        printf("Entrer la taille du prénom :\t");
        scanf("%d",&tprenom);


        for(i=0;i<n;i++) {
            t[i].nom = (char *) malloc(tnom * sizeof(char));
            printf("Entrez le nom  de la personne N%d:\t",i+1);
            scanf("%s",t[i].nom);

            t[i].prenom = (char *) malloc(tnom * sizeof(char));
            printf("Entrez le prenom de cette personne:\t");
            scanf("%s",t[i].prenom);

            printf("Entrez son age:\t");
            scanf("%d",&t[i].age);
        }

        printf("\nLe tabeau avant l'insertion:\n");

        for(i=0;i<n;i++)
            printf("L'age de %s %s est: %d ans.\n",t[i].nom,t[i].prenom,t[i].age);

        printf("\nDonnez la position d'insertion souhaitee:\n");
        scanf("%d",&k);

        n++;

        for(i=n-1;i>k;i--) {
            strcpy(t[i].nom, t[i-1].nom);
            strcpy(t[i].prenom, t[i-1].prenom);
            t[i].age = t[i-1].age;
        }

        printf("\nEntrez le nom  de la personne a inserer:\t");
        t[k].nom = (char *) malloc(tnom * sizeof(char));
        scanf("%s",t[k].nom);

        t[k].prenom = (char *) malloc(tnom * sizeof(char));
        printf("Entrez la prenom de cette personne:\t");
        scanf("%s",t[k].prenom);

        printf("Entrez son age:\t");
        scanf("%d",&t[k].age);

        printf("\nLe tableau apres l'insertion:\n");

        for(i=0;i<n;i++)
            printf("L'age de %s %s est: %d ans.\n",t[i].nom,t[i].prenom,t[i].age);

        return 0;

    }

