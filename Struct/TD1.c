#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main (int argc, char *argv[])
{

 int N, M, mat[N][M];
 int som, i, j, som_div, div;

    printf("Saisir le nombre de lignes :\n");
    scanf("%d",&N);
    printf("Saisir le nombre de colonnes :\n");
    scanf("%d",&M);

    for(i = 0; i <= N; i++)
    {
        for(j = 0; j<= M; j++)
        {
            printf("Entrer la valeur %d : %d :",&i , &j);
            scanf("%d",&mat[i][j]);
        }
    for(i = 0; i <= N; i++)
    {
        for(j = 0; j<= M; j++)
        {
            som_div=0;
            for(div = 1; div <= j/2; div++)
                if(j%div==0)
                    som_div+=div;
            if(som_div==j)
                printf("%d est un nombre parfait");
        }
    }
    }

 return ;
}
