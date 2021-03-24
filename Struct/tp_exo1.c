#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  NBR_POSTE 50 //Nombre de postes

typedef struct {
    char nom[25];
    int masque;
    char adrip[16];
    char type[20];
    char os[20];
    int identif;
    int numsalle;
} Poste;

int main(int argc, char * argv[]) {

Poste reseau[NBR_POSTE]; //Tableau des postes

system("cls");

int taille, i, j;
char chr[3];

printf("Entrer la taille du r\x82seau : ");

scanf("%d",&taille);

for (i=0; i < taille ; i++) {

    //Le nom du poste
     //reseau[i].nom = (char *) malloc(taille * sizeof(char));
     printf("\nEntrer le nom du poste :\t");
     scanf("%s",&reseau[i].nom);

     //L'adresse IP
     printf("\nEntrer l'adresse IP du poste :\t");
     scanf("%s",&reseau[i].adrip);

     //Le masque du sous-réseau
     printf("\nEntrer le masque du sous-reseau :\t");
     scanf("%d",&reseau[i].masque);


     printf("\nEntrer le type du poste :\t");

     //Le type de poste
     scanf("%s",&reseau[i].type);

     printf("\nEntrer OS du poste :\t");
     scanf("%s",&reseau[i].os);

     printf("\nEntrer numero identif :\t");
     scanf("%d",&reseau[i].identif);

     printf("\nEntrer numero de salle :\t");
     scanf("%d",&reseau[i].numsalle);
 }

system("cls");  //Effacer écran
/*
for(i=0; i < taille ; i++) {
     printf("\nLe nom du poste :\t%s",reseau[i].nom);
     printf("\nAdresse IP du poste :\t%s", reseau[i].adrip);
     printf("\nMasque IP du poste :\t%d", reseau[i].masque);
     printf("\nEntrer le type du poste :\t%s", reseau[i].type);
     printf("\nEntrer OS du poste :\t%s", reseau[i].os);
     printf("\nEntrer numero identif :\t%d",reseau[i].identif);
     printf("\nEntrer numero numsalle :\t%d", reseau[i].numsalle);
 }

*/

//Question 1
 for(i=0; i < taille ; i++) {

   if (strcmp(reseau[i].type,"SERVEUR")== 0)
   {
     printf("\n\n\nLe nom du poste :\t%s",reseau[i].nom);
     printf("\nAdresse IP du poste :\t%s", reseau[i].adrip);
     printf("\nMasque IP du poste :\t%d", reseau[i].masque);
     printf("\nEntrer le type du poste :\t%s", reseau[i].type);
   }
 }

 //Question 2

 for(i=0; i < taille ; i++) {

   if (strcmp(reseau[i].type,"Client")== 0 && strcmp(reseau[i].os,"Linux")== 0)
   {
     printf("\n\n\nLe nom du poste :\t%s",reseau[i].nom);
     printf("\nAdresse IP du poste :\t%s", reseau[i].adrip);
     printf("\nMasque IP du poste :\t%d", reseau[i].masque);
     printf("\nOS du poste :\t%d", reseau[i].os);
     printf("\nEntrer le type du poste :\t%s", reseau[i].type);
   }
 }

 //Question 2

 for(i=0; i < taille ; i++) {
   j=0;
   while (reseau[i].adrip[j] != '.')
        strcat(chr, reseau[i].adrip[j]);
   int octet = atoi(chr);
   printf("%d",octet);

 }

}
