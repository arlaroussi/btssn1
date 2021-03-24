//Déclarartion des prototypes de fonctions
//========================================
int** reserverMat(int **, int, int);
void remplirMat(int **, int, int);
void afficherMat(int **, int, int);
void afficherTab(int *, int);

//Définition des fonctions
//========================================

int** reserverMat(int **tab, int n, int m) {
    int i;

    //Réserver espace ligne
    tab = malloc(n*sizeof(int *));

    if( tab == NULL )  {
        fprintf(stderr,"Allocation impossible");
        exit(EXIT_FAILURE);
    }

    //Réserver espace colonne
	for (i=0; i<n ; i++) {
        tab[i] = malloc(m*sizeof(int));
	}
	return tab;
}

void remplirMat(int **tab, int ligne, int colonne) {

    int i, j;

    for (i=0; i<ligne ; i++) {
        for (j=0; j<colonne; j++) {
         	printf("\n\tEntrer element : ");
            scanf("%d",&tab[i][j]);
        }
	}
} //Fin de la fonction

void afficherMat(int **tab, int ligne, int colonne) {
	int i,j;

	printf("\tMATRICE :\n ");

	for (i=0; i<ligne ; i++) 	{
        for (j=0; j<colonne; j++) {
            printf("\t\t%d\t", tab[i][j]);
        }
        printf("\n");
    } //Fin de la fonction
}

void afficherTab(int *tab, int n) {
	int i;

	printf("\tTAVLEAU :\n ");

	for (i=0; i<n ; i++) 	{
           printf("\t\t%d\t", tab[i]);
    }
} //Fin de la fonction
