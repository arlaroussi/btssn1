#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

int tab[] = {12, 15, 13, 10, 8, 9, 13, 14};
int inverse[8];


int i, j;

system("cls");

//Initialisation des variables
j = 7;

for (i=0; i < 8 ; i++)
{
	inverse[j] = tab[i];
	j--;
}

printf("\n");
printf("INVERSE :\t");

for (i=0; i<8 ; i++)
{
	printf("%d\t",inverse[i]);
}

printf("\n\n");
printf("TAB :\t");
for (i=0; i<8 ; i++)
{
	printf("\t%d",tab[i]);
}
printf("\n\n");

return 0;
}
