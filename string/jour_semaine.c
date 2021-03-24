#include <stdio.h>
#include <string.h>

char * jourSemaine(int val) {

 char * jour[9] = {"Erreur!", "lundi", "mardi", "mercredi","jeudi", "vendredi", "samedi","dimanche"};

 //Affichage du résultat - pour perfectionnistes
 if (val>0 && val<8)
    return jour[val];
 else
     printf("%s",jour[0]);
}


void main() {

 int N;

 char jour[20];

 //Saisie du nombre
 printf("Entrez un nombre entre 1 et 7 : ");
 scanf("%d", &N);
 strcpy(jour,jourSemaine(N));
 printf("Le jour correspondant est %s : ", jour);

 return;
}


