#include <stdio.h>
main()
{
 /* Déclarations */
 char SUJ[100]; /* chaîne à transformer        */
 char OBJ[100]; /* chaîne à supprimer dans SUJ */
 int I;         /* indice courant dans SUJ     */
 int J;         /* indice courant dans OBJ     */
 int TROUVE;    /* indicateur logique qui précise */
                /* si la chaîne OBJ a été trouvée */

 /* Saisie des données */
 printf("Introduisez la chaîne à supprimer   : ");
 gets(OBJ);
 printf("Introduisez la chaîne à transformer : ");
 gets(SUJ);
 /* Recherche de OBJ dans SUJ */
 TROUVE=0;
 for (I=0; SUJ[I] && !TROUVE; I++)
    /* Si la première lettre est identique, */
    if (SUJ[I]==OBJ[0])
        {
         /* alors comparer le reste de la chaîne */
         for (J=1; OBJ[J] && (OBJ[J]==SUJ[I+J]); J++)
            ;
         if (OBJ[J]=='\0') TROUVE=1;
        }
 /* Si la position de départ de OBJ dans SUJ a été trouvée */
 /* alors déplacer le reste de SUJ à cette position. */
 if (TROUVE)
    {
     I--;
     /* Maintenant  I indique la position de OBJ */
     /* dans SUJ et J indique la longueur de OBJ */
     for (; SUJ[I+J]; I++)
          SUJ[I]=SUJ[I+J];
     SUJ[I]='\0';
    }
  /* Affichage du résultat */
 printf("Chaîne résultat : \"%s\"\n", SUJ);
 return 0;
}
