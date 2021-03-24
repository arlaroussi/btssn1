//Fichier entête

void remplirTab(int *, int);
void afficherTab(int *, int);
void remplirMat(int**, int, int);
void afficherMat(int**, int, int);

void remplirTab(int *tab, int n) 
{
	int i;
	
	for (i=0; i<n ; i++) 
	{
		printf("\n\tEntrer élément %d : ", i+1); 
		scanf("%d",&tab[i]);
	}
		printf("\n"); 
}
	
void afficherTab(int *tab, int n) 
{
	int i;
	
	printf("\tTABLEAU : ");
	
	for (i=0; i<n ; i++) 
	{
		printf("\t%d\t", tab[i]); 
	}
	printf("\n"); 
}

void remplirMat(int ** tab, int n, int k) 
{
	int i,j;
	
	for (i=0; i<n ; i++) 	{
		
		for (j=0; j<k; j++) {
			printf("\n\tEntrer élément %d : ", i+1); 
			scanf("%d",&tab[i][j]);
	}
		printf("\n"); 
}
}

void afficherMat(int ** tab, int n, int k) 
{
	int i,j;
	
	printf("\tMatrice : ");
	
	for (i=0; i<n ; i++) 	{
		
		for (j=0; j<k; j++) {
			
			printf("\t%d\t", tab[i][j]); 
		}
	}
	printf("\n"); 
}
