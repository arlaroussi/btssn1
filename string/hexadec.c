#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
 //Déclarations
 char CH[100]; /* chaîne numérique à convertir */
 long N; /* résultat numérique */
 int I;  /* indice courant */
 int OK; /* indicateur logique précisant si la */
         /* chaîne a été convertie avec succès */

 //Saisie de la chaîne
 printf("Entrez un nombre hexa entier et positif : ");

 //gets(CH);

 scanf("%s", &CH);

 //Conversion de la chaîne

 OK=1;
 N=0;

 for (I=0; OK && CH[I]; I++)
     if (isxdigit(CH[I]))
       {
        CH[I] = toupper(CH[I]);
        printf("%x\n",CH[I]);
        if (isdigit(CH[I])) {
           N = N*16 + (CH[I]-'0');
        }
        else
           N = N*16 + 10 + (CH[I]-'A');
       }
     else
        OK=0;

 /* Affichage de la chaîne convertie */
 if (OK)
   {
    printf("Valeur numerique HEXA : %lX\n", N);
    printf("Valeur numerique decimale     : %ld\n", N);
   }
 else
    printf("\a\"%s\" n'est pas une valeur HEXA correcte.\n", CH);
 return 0;
}
