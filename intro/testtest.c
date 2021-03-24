#include <stdio.h>

int main() {
   int nbr, i, r, tab[30];

   printf(" Entrez le nombre des éléments dans le tableau : ");
   scanf("%d", &nbr);

   printf(" Entrez les éléments du tableau : ");
   for (i = 0; i < nbr; i++) {
      scanf("%d", &tab[i]);
   }

   printf(" Entrez l'élément à rechercher: ");
   scanf("%d", &r);

   //La recherche commence à partir de zéro
   i = 0;
   while (i < nbr && r != tab[i]) {
      i++;
   }

   if (i < nbr) {
      printf("L'élément se trouve dans la position = %d", i + 1);
   } else {
      printf("Elément non trouvé");
   }

   return 0;
}
