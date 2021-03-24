#include <stdio.h>
#include <ctype.h>
 main()
{
 /* D�clarations */
 char CH[100]; /* cha�ne num�rique � convertir */
 long N; /* r�sultat num�rique */
 int I;  /* indice courant */
 int OK; /* indicateur logique pr�cisant si la */
         /* cha�ne a �t� convertie avec succ�s */

 /* Saisie de la cha�ne */
 printf("Entrez un nombre hexadecimal entier et positif : ");
 gets(CH);
 /* Conversion de la cha�ne */
 OK=1;
 N=0;
 for (I=0; OK && CH[I]; I++)
     if (isxdigit(CH[I]))
       {
        CH[I] = toupper(CH[I]);
        if (isdigit(CH[I]))
           N = N*16 + (CH[I]-'0');
        else
           N = N*16 + 10 + (CH[I]-'A');
       }
     else
        OK=0;

 /* Affichage de la cha�ne convertie */
 if (OK)
   {
    printf("Valeur numerique hexadecimale : %lX\n", N);
    printf("Valeur numerique decimale     : %ld\n", N);
   }
 else
    printf("\a\"%s\" n'est pas une valeur "
           "hexadecimale correcte.\n", CH);
 return 0;
}
