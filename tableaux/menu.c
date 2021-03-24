#include <stdio.h>
#include <stdlib.h>
#include "header/utiltab.h"
#include "header/utilmat.h"
#include "header/menu.h"


int main()
{
 char choix;
 //Les tableaux
 int *tab1, *tab2, *tab3, **mat;
 int ntab1, ntab2, ligne, col, i, j;

//Affichage du menu
menu();

// Demander un choix
printf("\n\n\n\t\t\t Entrer votre choix : ");
scanf("%c",&choix);

while (choix != '7') {

 switch (choix)
 {
     case '1' : system("cls");
                printf("Dimension du tableau : ");
                scanf("%d", &ntab1);
                tab1 = reserverTab(tab1, ntab1);
                printf("\nEntrer les elements du tableau par ordre croissant :\n");
                remplirTab(tab1, ntab1);
                break;

     case '2' : system("cls");
                printf("Nombre de lignes : ");
                scanf("%d", &ligne );
                printf("Nombre de colonnes : ");
                scanf("%d", &col );
                mat = reserverMat(mat, ligne, col);
                printf("\nEntrer les elements du tableau par ordre croissant :\n");
                remplirMat(mat, ligne, col);
                break;

     case '3' : system("cls");
                printf("\n\n\n");
                printf("Tableau :\n");
                afficherTab(tab1, ntab1);
                printf("\n\n\n");
                system("pause");
                break;

     case '4' : system("cls");
                printf("\n\n\n");
                afficherMat(mat, ligne, col);
                printf("\n\n\n");
                system("pause");
                break;

     case '5' : system("cls");
                printf("\n\n\n");
                printf("Nombre de lignes : ");
                scanf("%d", &ligne );
                printf("Nombre de colonnes : ");
                scanf("%d", &col );
                mat = reserverMat(mat, ligne, col);
                matUnit(mat,ligne,col);
                afficherMat(mat, ligne, col);
                system("pause");
                break;

       case '6' : system("cls");
                  printf("Dimension du tableau tab1 : ");
                  scanf("%d", &ntab1);
                  tab1 = reserverTab(tab1, ntab1);
                  printf("\nEntrer les elements du tableau par ordre croissant :\n");
                  remplirTab(tab1, ntab1);
                  printf("Dimension du tableau tab2 : ");
                  scanf("%d", &ntab2);
                  tab2 = reserverTab(tab2, ntab2);
                  printf("\nEntrer les elements du tableau par ordre croissant :\n");
                  remplirTab(tab2, ntab2);
                  tab3 = reserverTab(tab3, ntab1+ntab2);
                  fusionnerTab(tab1, tab2, tab3, ntab1,ntab2);
                  afficherTab(tab3, ntab1+ntab2);
                  system("pause");
                  break;
}
menu();
printf("\n\n\n\t\t\t Entrer votre choix : ");
scanf("%c",&choix);

}

 return 0;
}
