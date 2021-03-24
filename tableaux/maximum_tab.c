#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

int tab[] = {12, 15, 13, 10, 8, 9, 13, 14};

int i, max, position;

system("clear");

max = tab[0];   //Maximum potentiel

for (i=1 ; i < 8 ; i++)
{
	if (tab[i] > max) {
		
		max = tab[i];  //Nouveau maximum potentiel
		position = i;  //Garder la position potentiel
	}
}

printf("\n\n\tLe maximum : %d\n",max);
printf("\n\tLa position  : %d\n\n",position);
 
return 0;
}
