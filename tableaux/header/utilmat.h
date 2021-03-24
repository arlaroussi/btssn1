//Déclarartion des prototypes de fonctions
//========================================
int** reserverMat(int **, int, int);
void remplirMat(int **, int, int);
void afficherMat(int **, int, int);
void matUnit(int**,int,int);

//Définition des fonctions
//===================================================

int** reserverMat(int **mat, int n, int m) {
    int i;

    //Réserver espace ligne
    mat = (int **) malloc(n*sizeof(int *));

    if( mat == NULL )  {
        fprintf(stderr,"Allocation impossible");
        exit(EXIT_FAILURE);
    }

    //Réserver espace colonne
	for (i=0; i<n ; i++) {
        *(mat+i) = malloc(m*sizeof(int));
	}
	return mat;
}

//======================================================
void remplirMat(int **tab, int ligne, int colonne) {

    int i, j;

    for (i=0; i<ligne ; i++) {
        for (j=0; j<colonne; j++) {
         	printf("\n\tEntrer element : ");
            scanf("%d",*(tab+i)+j);
        }
	}
} //Fin de la fonction

//=======================================================
void afficherMat(int **tab, int ligne, int colonne) {
	int i,j;

	printf("\tMATRICE :\n ");

	for (i=0; i<ligne ; i++) 	{
        for (j=0; j<colonne; j++) {
            printf("\t\t%d\t", *(*(tab+i)+j);
        }
        printf("\n");
    } //Fin de la fonction
}

//====================================================
void matUnit(int** mat, int n, int m) {

int i, j;

        for (i=0; i<n; i++)
             for (j=0; j<m; j++) {
                  if (i == j)
                       *(*(mat+i)+j) = 1;  //TAB[i][j]
                  else
                       *(*(mat+i)+j) = 0;
              }
}
