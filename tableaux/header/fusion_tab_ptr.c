#include <stdio.h>
#include <stdlib.h>
#include "header/utiltab.h"


int main()
{

 //Les tableaux
 int *tab1, *tab2, *tab3;
 int ntab1, ntab2, ntab3;
 int itab1, itab2, itab3; /* indices courants */

 /* Saisie des données */
 printf("Dimension du tableau tab1 : ");
 scanf("%d", &ntab1 );
 tab1 = reserverTab(tab1, ntab1);
 printf("\nEntrer les elements de tab1 par ordre croissant :\n");
 remplirTab(tab1, ntab1);

 printf("Dimension du tableau tab2 : ");
 scanf("%d", &ntab2 );
 tab2 = reserverTab(tab2, ntab2);
 printf("Entrer les elements de tab2 par ordre croissant :\n");
 remplirTab(tab2, ntab2);


 //Réservation espace tab3
 ntab3 = ntab1+ntab2;
 tab3 = reserverTab(tab3, ntab3);

 /* Affichage des tableaux tab1 et tab2 */
 printf("Tableau tab1 :\n");
 afficherTab(tab1, ntab1);
 printf("\n\n\n\t\t\t");

 printf("Tableau itab2 :\n");
 afficherTab(tab2, ntab2);
 printf("\n\n\n\t\t\t");

 itab1=0; itab2=0; itab3=0;

 while ((itab1<ntab1) && (itab2<ntab2))
        if(tab1[itab1]<tab2[itab2]) {
             tab3[itab3]=tab1[itab1];
             itab3++;
             itab1++;
        }
        else {
             tab3[itab3]=tab2[itab2];
             itab3++;
             itab2++;
        }

 /* Si itab1 ou itab2 sont arrivés à la fin de leur tableau, */
 /* alors copier le reste de l'autre tableau.          */

 while (itab1<ntab1) {
         tab3[itab3]=tab1[itab1];
         itab3++;
         itab1++;
 }

 while (itab2<ntab2) {
         tab3[itab3]=tab2[itab2];
         itab3++;
         itab2++;
 }

 /* Edition du résultat */
 printf("\n\n\t\t\tTableau tab3 :\n");
 afficherTab(tab3, ntab3);
 printf("\n");

 return 0;
}
