#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

char phrase[50];

char mot1[10];
char mot2[10];
char var;

int i=0, j;

system("clear");

//Initialisation des variables

printf("Entrer votre phrase : ");

fgets(phrase, 50, stdin);
	
printf("Phrase : %s", phrase); 


while (i < strlen(phrase)) {
	
	//Initialisation des mots 
	strcpy(mot1, " ");
	strcpy(mot2, " ");
	j=0;
		
	while (phrase[i] != '.'  && i < strlen(phrase) && phrase[i] != ' ') {
			
		mot1[j] = phrase[i];
		//mot2[k] = phrase[i];
			j++;
			//k--;
			i++;
	 }

	printf("%s\n", mot1);
	
//	if (strcmp(mot1,mot2))
//		printf("%s\n est un mot palindrôme\n", mot1);
		
	i++;
		
	}
	
printf("\n");

return 0;
}

