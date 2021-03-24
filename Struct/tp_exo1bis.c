#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "tp_exo1.h"
#define  NBR_POSTE  1

int main(int argc, char * argv[]) {

    int i;
    Poste reseau[NBR_POSTE];

    system("cls");

    remplirTabStruct(reseau, NBR_POSTE);

    afficherTabStruct(reseau, NBR_POSTE);

    return 0;
}
