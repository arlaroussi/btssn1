//Déclarartion des prototypes de fonctions
//========================================
void remplirTab(int *, int);
void afficherTab(int *, int);

//Définition des fonctions
//========================================
void remplirTab(int *tab, int n) {
	int i;

	for (i=0; i<n ; i++) 	{
		printf("\n\tEntrer \x82l\x82ment %d : ", i+1);
		scanf("%d",&tab[i]);
	}
		printf("\n");
} //Fin de la fonction

void afficherTab(int *tab, int n) {
	int i;
	printf("\tTABLEAU : ");

	for (i=0; i<n ; i++) 	{
		printf("\t%d\t", tab[i]);
	}
	printf("\n");
} //Fin de la fonction

void reserverTab(int *tab, int n) {
	tab = (int*)malloc(n*sizeof(int));

	if (tab == NULL) {
        fprintf(stderr, "Erreur mémoire");
        return EXIT_FAILURE;
	}

} //Fin de la fonction
