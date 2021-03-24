#include <stdio.h>
#include <ctype.h>
 main()
{

 char chaine[100];          /* chaine num�rique � convertir */
 long N;                    /* r�sultat num�rique */
 int I;                     /* indice courant */
 int OK;                    /* indicateur logique pr�cisant si la */
                            /* chaine a �t� convertie avec succ�s */

 /* Saisie de la chainea�ne */
 printf("Entrez un nombre entier et positif : ");
 scanf("%s", chaine);

 /* Conversion de la chaine */
 OK=1;
 N=0;

 for (I=0; OK && chaine[I]; I++)
     if (isdigit(chaine[I]))
        N = N*10 + (chaine[I]-'0');
     else
        OK=0;

 /* Affichage de la cha�ne convertie */
 if (OK)
     printf("Valeur num\x82rique : %d\n", N);
 else
     printf("\a\"%s\" ne repr\x82sente pas correctement "
           "un entier et positif.\n", chaine);
 return 0;
}
