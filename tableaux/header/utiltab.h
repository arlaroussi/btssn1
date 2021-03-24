//Déclarartion des prototypes de fonctions
//========================================
void remplirTab(int *, int);
void afficherTab(int *, int);
int * reserverTab(int *, int);
void fusionTab(int *, int*, int *, int , int );

//Définition des fonctions
//========================================
void remplirTab(int *tab, int n) {
	int i;

	for (i=0; i<n ; i++) 	{
		printf("\n\tEntrer \x82l\x82ment[%d] : ", i);
		scanf("%d",(tab+i));
	}
		printf("\n");
} //Fin de la fonction

//===========================================
void afficherTab(int *tab, int n) {
	int i;
	printf("\n\nTABLEAU RESULTAT -->\n\t\t");
	for (i=0; i<n ; i++) 	{
		printf("\t%d", *(tab+i));
	}
	printf("\n\n\n");
} //Fin de la fonction

//===========================================
int * reserverTab(int *tab, int n) {

	tab = (int*)malloc(n*sizeof(int));

	if (tab == NULL) {
        fprintf(stderr, "Erreur mémoire");
        return EXIT_FAILURE;
	}

	return tab;

} //Fin de la fonction

//=============================================

void fusionnerTab(int * tab1, int* tab2, int *tab3, int ntab1, int ntab2)
{
    int itab1, itab2, itab3; /* indices courants */

 itab1=0; itab2=0; itab3=0;

 while ((itab1<ntab1) && (itab2<ntab2)) {
        if(tab1[itab1]<tab2[itab2]) {
             tab3[itab3]=tab1[itab1];
             itab1++;
        }
        else {
             tab3[itab3]=tab2[itab2];
             itab2++;
        }
        itab3++;
 } //fin de la boucle

 /* Si itab1 ou itab2 sont arrivés à la fin de leur tableau, */
 /* alors copier le reste de l'autre tableau.          */

 while (itab1<ntab1) {
         tab3[itab3]=tab1[itab1];
         itab3++;
         itab1++;
 }

 while (itab2<ntab2) {
         tab3[itab3]=tab2[itab2];
         itab3++;
         itab2++;
 }

 return 0;
}

