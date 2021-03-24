#include <stdio.h>
#include <string.h>


void main()
{
 int i, j, nbligne;

 system("cls");

 printf("Entrer le nombre de lignes : ");
 scanf("%d", &nbligne);

 for (i=1; i <= nbligne ; i++){

    for (j=1; j <= nbligne-i ; j++)
        printf(" ");

    for (j=1; j <= 2*i-1 ; j++)
        printf("*");

    printf("\n");
 }

  return;
}
