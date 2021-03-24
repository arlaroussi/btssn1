void colorSet(char[]);

void colorSet(char tab[])
{

    //on crée une matrice qui contient les couleurs possibles
    char color[7][10] = { {"jaune"} , {"rouge"} , {"vert"} , {"bleu"} , {"magenta"} , {"cyan"} , {"reset"}};
    int result;


	for(int i=0; i<7; i++){

		//comparer la couleur en paramètre et les couleurs possibles
		if(strcmp(color[i], tab) == 0){

			result = i;
		}
	}


	//définie la couleur du print en fonction du resultat
	switch (result)
	{
	case 0:printf("\033[01;33m");//jaune
	break;

	case 1:printf("\033[1;31m");//rouge
	break;

	case 2:printf("\033[1;32m");//vert
	break;

	case 3:printf("\033[1;34m");//bleu
	break;

	case 4:printf("\033[1;35m");//magenta
	break;

	case 5:printf("\033[1;36m");//cyan
	break;

	case 6:printf("\033[0m");//reset color = white
	break;

	default:printf("La couleur n'existe pas");
	}
}
