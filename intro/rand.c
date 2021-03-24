#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // pour rand

int main(void){

    srand(time(NULL));
    int nbgen = rand()%9+1;    //entre 1-9
    printf("%d\n",nbgen);    //test affichage
    return 0;
}
