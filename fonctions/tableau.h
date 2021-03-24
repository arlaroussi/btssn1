bool rechercherVal(int*, int, int);
void remplirTab(int[], int);
void afficherTab(int[], int);

//===============================================================
bool rechercherVal(int* T, int taille, int V) {

bool trouve = false;
int i;

for (i=0 ; (i<taille && trouve==false); i++) {
       if (T[i]==V)
           trouve = true;
}
return trouve;
} //Fin de la fonction rechercherVal

//===============================================================
void remplirTab(int tableau[], int n) {

	int i;

	for (i=0 ; i < n ; i++)
	{
		printf("\nEl\x82ment %d : ",i+1);
		scanf("%d",&tableau[i]);
	}
	return;
}

//==============================================================
void afficherTab(int tableau[], int n) {

	int i;
    printf("\n\n");
	for (i=0 ; i < n ; i++)
	{
		printf("\t%d",tableau[i]);
	}
	return;
} //Fin de la fonction afficherTab

//===============================================================
