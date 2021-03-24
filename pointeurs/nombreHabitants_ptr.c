#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char *nom;
    int nbr;
} ville;


   int main()   {
        ville tmp;
        int i,j,n, tnom;
        ville *tabVille;

        printf("Donnez le nombre de villes:\t");
        scanf("%d",&n);
        tabVille = (ville *) malloc(n * sizeof(ville)); //Réservation pour le tableau des villes

        printf("Entrer la taille du nom :\t");
        scanf("%d",&tnom);

        for(i=0;i<n;i++) {

            tabVille[i].nom = (char *) malloc(tnom * sizeof(char));

            printf("Donnez le nom de la ville % d : ",i+1);
            scanf("%s",tabVille[i].nom);

            printf("Donnez le nombre d'habitants de cette ville:\t");
            scanf("%d",&tabVille[i].nbr);
        }

        //Affichage du tableau trié des villes

       for(i=0;i<n;i++)
            printf("== Le nombre d'habitants de %s est : %d\n",tabVille[i].nom,tabVille[i].nbr);

        for(i=0; i<n-1 ; i++)

            for(j=0 ;j<n-i-1 ; j++) {

                 if(tabVille[j].nbr > tabVille[j+1].nbr) {
                     tmp.nom = (char *) malloc(tnom * sizeof(char));
                     strcpy(tmp.nom,tabVille[j].nom);
                     tmp.nbr = tabVille[j].nbr;
                     strcpy(tabVille[j].nom,tabVille[j+1].nom);
                     tabVille[j].nbr = tabVille[j+1].nbr;
                     strcpy(tabVille[j+1].nom,tmp.nom);
                     tabVille[j+1].nbr = tmp.nbr;
                }
            }

        printf("Les villes dans l'ordre croissant du nombre d'habitants:\n");

        for(i=0 ; i < n ;i++)
            printf("-- Le nombre d'habitants de %s est : %d\n",tabVille[i].nom,tabVille[i].nbr);


        system("pause");

        return 0;

    }

