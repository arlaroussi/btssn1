#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    char nom[50];
 
    printf("Quel est votre nom ? ");
    
    fgets(nom, 50, stdin);
    
    printf("Ah ! Vous vous appelez donc %s !\n\n", nom);
 
    return 0;
}
