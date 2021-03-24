#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

int tab[] = {12, 15, 13, 10, 8, 9, 13, 14};

int i, nombre, reste;

system("clear");

printf("Entrer la valeur du nombre : ");

scanf("%d", &nombre);

for (i=0 ; i < 8 ; i++)
{
	reste = *(tab+i) % nombre; 
	
	if (reste == 0) {
		printf("\n\n\t%d%s%d",tab[i]," est un multiple de\t", nombre);
	}
	
}
	printf("\n\n");
	
return 0;
}
