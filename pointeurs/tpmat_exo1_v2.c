#include <stdio.h>
#include <stdlib.h>
#include "fonctions_matrice_v2.h"

void main (int argc, char * argv[]) {

    int ** mat, *somme;
    int ligne, colonne,i, j;

    printf("\n\tEntrer le nombre de lignes : ");
    scanf("%d",&ligne);

    printf("\n\tEntrer le nombre de colonnes : ");
    scanf("%d",&colonne);

    mat = reserverMat(mat,ligne, colonne);

    somme = (int*) malloc(colonne * sizeof(int));

    for (i=0; i<colonne ; i++) {
          *(somme+i) = 0;
    }

    remplirMat(mat, ligne, colonne);

    for (i=0; i<colonne ; i++) {
        for (j=0; j<ligne ; j++) {
          somme[i] += mat[j][i];
        }
    }

    afficherMat(mat, ligne, colonne);
    afficherTab(somme, colonne);
}

