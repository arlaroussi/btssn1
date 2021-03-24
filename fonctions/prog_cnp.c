#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int facto(int); //Prototype

int facto(int x) {

	int i, result=1;

	for (i=2 ; i <= x ; i++)
	{
        result *=i;
	}
	return result;
}

//Fonction entrée programme

int main(int argc, char *argv[]) {

int n, p, resultat;

system("cls");

printf("Entrer la valeur de n : ");
scanf("%d",&n);

if (n >= 1) {

    printf("\nEntrer la valeur de p : ");
    scanf("%d",&p);

    if (n > p) {
        resultat = facto(n)/(facto(p) * facto(n-p));
        printf("\nCNP = %d",resultat);
    }
    else
        printf("\nErreur de saisie de p");
}
else
    printf("\nErreur de saisie de n");

return 0;
}
