#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char* nom;
    int masque;
    char adrip[15];
    char type[20];
    char os[20];
    int identif;
    int numsalle;
} Poste;

void remplirTabStruct(Poste[], int);

void afficherTabStruct(Poste[], int);

void remplirTabStruct(Poste liste[], int dim) {

int taille, i;
printf("Entrer la taille du nom du poste : ");
scanf("%d",&taille);

for (i=0; i < dim ; i++) {
     liste[i].nom = (char *) malloc(taille * sizeof(char));
     printf("\nEntrer le nom du poste :\t");
     scanf("%s",&liste[i].nom);
     printf("\nEntrer l'adresse IP du poste :\t");
     scanf("%s",&liste[i].adrip);
     printf("\nEntrer le masque du sous-liste :\t");
     scanf("%s",&liste[i].masque);
     printf("\nEntrer le type du poste :\t");
     scanf("%s",&liste[i].type);
     printf("\nEntrer OS du poste :\t");
     scanf("%s",&liste[i].os);
     printf("\nEntrer numero identif :\t");
     scanf("%d",&liste[i].identif);
     printf("\nEntrer numero de salle :\t");
     scanf("%d",&liste[i].numsalle);
 }
}

 void afficherTabStruct(Poste liste[], int dim) {

 int i;

system("cls");  //Effacer écran

    for(i=0; i < dim ; i++) {
        printf("\nLe nom du poste :\t%s",&liste[i].nom);
        printf("\nAdresse IP du poste :\t%s", liste[i].adrip);
        printf("\nMasque IP du poste :\t%d", liste[i].masque);
        printf("\nEntrer le type du poste :\t%s", liste[i].type);
        printf("\nEntrer OS du poste :\t%s", liste[i].os);
        printf("\nEntrer numero identif :\t%d",liste[i].identif);
        printf("\nEntrer numero numsalle :\t%d", liste[i].numsalle);
 }
}
