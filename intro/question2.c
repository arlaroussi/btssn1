#include <stdio.h>
#include <string.h>


//Fonction main
int main (int argc, char* argv[]) {

int x,y, z;
 
//Entrée des données du problème
 
printf("Entrer la valeur de x : ");
scanf ("%d", &x);
 
printf("Entrer la valeur de y : ");
scanf ("%d", &y);
 
printf("Entrer la valeur de z : ");
scanf ("%d", &z);
 
if (x>y && x>z) {
	printf("Le plus grand nombre est x\n");
}
else {
	if (y>x && y>z) {
		printf("Le plus grand nombre est y\n");
	}
	else 
		printf("Le plus grand nombre est z\n");
	}
	
	return 0;
}
