#include <stdio.h>
#include <string.h>
main()
{
 /* Déclarations */
 /* Sujets et terminaisons */
 char SUJ[6][5]  = {"je","tu","il","nous","vous","ils"};
 char TERM[6][5] = {"e","es","e","ons","ez","ent"};
 char VERB[20]; /* chaîne contenant le verbe */
 int L;         /* longueur de la chaîne */
 int I;         /* indice courant */

 /* Saisie des données */
 printf("Verbe : ");
 scanf("%s", VERB);

 /* Contrôler s'il s'agit d'un verbe en 'er' */
 L=strlen(VERB);
 if ((VERB[L-2] != 'e') || (VERB[L-1] != 'r'))
  printf("\"%s\" n'est pas un verbe du premier groupe.\n",VERB);
 else
     {
      /* Couper la terminaison 'er'. */
      VERB[L-2]='\0';
      /* Conjuguer ... */
      for (I=0; I<6; I++)
          printf("%s %s%s\n",SUJ[I], VERB, TERM[I]);
      }
 return 0;
}
