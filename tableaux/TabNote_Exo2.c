#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "header\tpexo2.h"

//Déclarartion des prototypes de fonctions
//========================================

int main(int argc, char *argv[]) {

int N, i;
float X, somme=1.00;

system("cls");

printf("Entrer la valeur de N  : ");
scanf("%d",&N);

printf("\nEntrer la valeur de X  : ");
scanf("%f",&X);

for (i=2; i<=N ;i++) {
    somme += puissance(X,i)/facto(i);
}
printf("\n\tSomme finale =\t%f", somme);
return 0;
} //fin du main
