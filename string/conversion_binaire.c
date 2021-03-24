#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int bin_decimal(char s[]) {

    /* D�clarations */
    int N; /* r�sultat num�rique */
    int I;  /* indice courant */
    int resultat=0, x;

    N = strlen(s);

    /* Conversion de la cha�ne */

    for (I=0; I<N; I++) {
        x = s[I] - '0';
        resultat += x * pow(2,N-I-1);
    }
    return resultat;
}


int main()
{
char valeur[20];
int result;

 /* Saisie de la cha�ne */
 printf("Entrez un nombre binaire entier et positif : ");
 scanf("%s", &valeur);

 result = bin_decimal(valeur);

 printf("Resultat final : %d", result);

 return 0;
}
