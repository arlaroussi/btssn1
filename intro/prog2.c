#include <stdio.h>
#include <string.h>

void main (int argc, char* argv[]) {

//Déclarer des chaines de caractères
char cours[11]="COURS INFO", *promotion = "Session 2020-2021", site[] = "Ivry Sur Seine";
int i;

//Déclarer un tableau de type réel
float tab[] = {20.50f, 200.10f};

printf ("\tCours : %s\n\tPromotion :%s\n\tSite : %s\n", cours, promotion, site);

for (i= 0; i<2; i++) {
	printf("Valeur : %.2f\n", *(tab+i));
}
}
