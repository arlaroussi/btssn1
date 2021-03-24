int facto(int);
float puissance(float , int);

//Définition des fonctions
//========================================
int facto(int x) {
	int i, resultat=1;

	if (x>=2) {
        for (i=2; i<=x ; i++) 	{
            resultat *= i;
        }
		return resultat;
    } //Fin de la fonction
}

float puissance(float a, int b) {
	int i;
	float resultat=1.00;

    if (b != 0) {
        if (a != 0) {
            for (i=1; i<=b ; i++) 	{
                resultat *= a;
            }
    }
  }
    return resultat;
}
