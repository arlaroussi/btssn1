#include <stdio.h>
#include <stdlib.h>

void main (int argc, char * argv[]) {

int SCORE[6][4] = { {1,2,2,0}, {2,3,3,0}, {3,1,3,0}, {4,1,1,0}, {5,0,2,0}, {6,1,3,0} };
int i, j;

for (i=0; i<6; i++)
        SCORE[i][3] = SCORE[i][1]*3 + SCORE[i][3];

for (i=0; i<6 ; i++) {
    printf("\nLigne : %d\n",i+1) ; //Afficher le numéro de ligne
    for (j=0; j<4; j++) {
        printf("\t\t%d\t", SCORE[i][j]);
    }
}
}
