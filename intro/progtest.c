#include <stdio.h>
#include <string.h>

//Début
void main()
{
    //Déclaration
    int i, j, k, ligne_1, ligne_2, ligne_3, n = 0;

    //Première figure
    printf("Nombre de ligne pour la figure 1 : ");
    scanf("%d", &ligne_1);

    for (i = 0; i < ligne_1; i++)
    {
        printf("\n******");
    }
    printf("\n\n");

    //Deuxième figure
    printf("Nombre de ligne pour la figure 2 : ");
    scanf("%d", &ligne_2);

    for (i = n; i < ligne_2; i++)
    {
        n += 1;
        printf("\n");
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
    }
    printf("\n\n");

    //Troisième figure

    int nb_etoile, nb_espace;

    printf("Nombre de ligne pour la figure 3 : ");
    scanf("%d", &ligne_3);
    printf("\n");

    for (i = 1; i<= ligne_3; i++)
    {
        nb_etoile = i * 2 - 1;
        nb_espace = i + ligne_3 - nb_etoile;
        for (j = 0; j < nb_espace; j++)
        {
            printf("%c", ' ');
        }
        for (k = 0; k < nb_etoile; k++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}


