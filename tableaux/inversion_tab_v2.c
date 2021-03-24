#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

int tab[] = {12, 15, 13, 10, 8, 9, 13, 14};

int i, j, buffer;
system("cls");

//Initialisation des variables


printf("\n\n");
printf("TAB AVANT :\t");
for (i=0; i<8 ; i++)  {
	printf("\t%d",tab[i]);
}

i = 0;
j = 7;

while (i < j) {
	buffer = tab[j];
	tab[j] = tab[i];
	tab[i] = buffer;
	i++;
	j--;
}

printf("\n\n");
printf("TAB APRES :\t");
for (i=0; i<8 ; i++)  {
	printf("\t%d",tab[i]);
}

printf("\n\n");
return 0;
}
