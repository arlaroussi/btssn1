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

int i, n;
double somme = 0, res;

system("cls");

printf("Entrer la valeur de n : ");
scanf("%d",&n);

for (i=1; i <= n ; i++) {
    res = facto(2*i-1);
    somme += 1/res;
}
printf("\nLa somme = %.6f", somme);
}
