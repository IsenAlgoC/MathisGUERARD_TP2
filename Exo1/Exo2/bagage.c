#include <stdio.h>
#include <stdlib.h>

void main() {
	//on définit une variable again pour savoir si on relance le programme
	int again = 1;
	do {
		//on rentre toutes les valeurs en vérifiant qu'elles sont correctes
		float longueur = 151;
		float largeur = 151;
		float hauteur = 151;
		while (longueur > 150) {
			printf("Entrez la longueur de votre valise (max 150cm) : ");
			scanf_s("%f", &longueur);
			printf("\n");
		}
		while (largeur > 150) {
			printf("Entrez la largeur de votre valise (max 150cm) : ");
			scanf_s("%f", &largeur);
			printf("\n");
		}
		while (hauteur > 150) {
			printf("Entrez la hauteur de votre valise (max 150cm) : ");
			scanf_s("%f", &hauteur);
			printf("\n");
		}
		//on vérifie si la valise a la bonne taille pour aller dans l'avion
		if ((longueur <= 55) && (largeur <= 35) && (hauteur <= 25)) {
			printf("\nLe format de la valise est valide");
		}
		else {
			printf("\nLe format de la valise n'est pas valide");
		}

		printf("\n\nEntrez 1 pour recommencer le programme ou 0 pour arreter : ");
		scanf_s("%d", &again);

		printf("\n");
		system("pause");
		printf("\n");
	} while (again == 1);
}