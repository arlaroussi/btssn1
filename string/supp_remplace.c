#include <stdio.h>
main()
{
 /* D�clarations */
 char SUJ[100]; /* cha�ne � transformer        */
 char OBJ[100]; /* cha�ne � supprimer dans SUJ */
 int I;         /* indice courant dans SUJ     */
 int J;         /* indice courant dans OBJ     */
 int TROUVE;    /* indicateur logique qui pr�cise */
                /* si la cha�ne OBJ a �t� trouv�e */

 /* Saisie des donn�es */
 printf("Introduisez la cha�ne � supprimer   : ");
 gets(OBJ);
 printf("Introduisez la cha�ne � transformer : ");
 gets(SUJ);
 /* Recherche de OBJ dans SUJ */
 TROUVE=0;
 for (I=0; SUJ[I] && !TROUVE; I++)
    /* Si la premi�re lettre est identique, */
    if (SUJ[I]==OBJ[0])
        {
         /* alors comparer le reste de la cha�ne */
         for (J=1; OBJ[J] && (OBJ[J]==SUJ[I+J]); J++)
            ;
         if (OBJ[J]=='\0') TROUVE=1;
        }
 /* Si la position de d�part de OBJ dans SUJ a �t� trouv�e */
 /* alors d�placer le reste de SUJ � cette position. */
 if (TROUVE)
    {
     I--;
     /* Maintenant  I indique la position de OBJ */
     /* dans SUJ et J indique la longueur de OBJ */
     for (; SUJ[I+J]; I++)
          SUJ[I]=SUJ[I+J];
     SUJ[I]='\0';
    }
  /* Affichage du r�sultat */
 printf("Cha�ne r�sultat : \"%s\"\n", SUJ);
 return 0;
}
