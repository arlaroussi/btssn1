#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "printfColor.h"

int main()
{

	/*
	On choisit simplement la couleur en tapant : colorSet("couleur choisit")

		couleurs disponibles : jaune, rouge, vert, bleu, magenta ,cyan ,reset
		la couleur "reset" correspond  à la couleur par défault (=blanche)
	*/

	colorSet("bleu");
	printf("Ecrire en bleu\n");

	colorSet("reset");
	printf("Ecrire en blanc\n");

	colorSet("jaune");
	printf("Ecrire en jaune\n");

	colorSet("rouge");
	printf("Ecrire en rouge\n");

}
