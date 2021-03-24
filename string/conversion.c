#include <stdio.h>
#include <ctype.h>
 main()
{
 /* Déclarations */
 char CH[100]; /* chaîne numérique à convertir */
 long N; /* résultat numérique */
 int I;  /* indice courant */
 int OK; /* indicateur logique précisant si la */
         /* chaîne a été convertie avec succès */

 /* Saisie de la chaîne */
 printf("Entrez un nombre hexadecimal entier et positif : ");
 gets(CH);
 /* Conversion de la chaîne */
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

 /* Affichage de la chaîne convertie */
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
