#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[]) {

int tab[] = {12, 15, 13, 10, 8, 9, 13, 14};

int i, som_paire=0, som_imp=0, reste;

system("cls");

for (i=0 ; i < 8 ; i++)
{
	reste = tab[i] % 2;

	if (reste == 0)
	{
		som_paire += tab[i];
	}
	else {
		som_imp += tab[i];
	}
}

printf("\n\n\tLa somme paire = %d\n",som_paire);
printf("\n\tLa somme impaire = %d\n\n",som_imp);

return;
}

