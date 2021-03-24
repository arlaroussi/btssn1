#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int generer_bornes(int, int);
void initialiser_aleat(unsigned int);

int appele_srand = 0;

int generer_bornes(int min, int max)
{
    if(appele_srand != 1)
        initialiser_aleat((unsigned)time(NULL));
    return rand()%(max-min+1) + min;
}

void initialiser_aleat(unsigned int n)
{
    srand(n);
    appele_srand = 1;
}

int main(void)
{
    int i;
    initialiser_aleat((unsigned)time(NULL));
    for(i = 0; i < 10; ++i)
        printf("%d\n", generer_bornes(1, 9));
    return EXIT_SUCCESS;
}
