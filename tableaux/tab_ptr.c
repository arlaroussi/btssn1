#include <stdio.h>
#include <stdlib.h>

void main(){

    int *tab, i, n,sommep, sommei; //tab est l'adresse du premier élément du tableau

    printf("\nCombien d'element dans le tableau ? :");
    scanf("%d", &n);

    //Réservation du tableau
    tab = (int*) malloc (n*sizeof(int)); //tab devient un tableau de n éléments

    if (tab == NULL) {
        fprintf(stderr, "Erreur allocation mémoire");
        exit(EXIT_FAILURE);
    }

    //Remplir le tableau
    for(i=0;i<n;i++){
        printf("\nEntrer l\'entier %d du tableau :",i);
        scanf("%d",(tab+i)); //tab+i est UNE ADRESSE MEMOIRE = POINTEUR
    }

    //Affichage
    printf("\n\n\tTABLEAU :\n ");

    for(i=0; i<n; i++){
        printf("\t\t%d\t", *(tab+i));

    }

    //Traitement
    sommep=0;
    sommei=0;

    for(i=0; i<n; i++){
        if(*(tab+i)%2==0)
           sommep+=*(tab+i);
        else
            sommei+=*(tab+i);
    }
    printf("\n\n\tSOMME ELEMENTS PAIRS DU TABLEAU : %d",sommep);
    printf("\n\n\tSOMME ELEMENTS IMPAIRS DU TABLEAU : %d\n\n",sommei);

}

MAT
1 2 3
4 5 6
7 8 9

1 x 4 x 7 = 28
2 x 5 x 8 = 80
3 x 6 x 9 = 162
