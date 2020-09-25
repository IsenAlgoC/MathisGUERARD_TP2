#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

void main() {
	//boucle pour relancer le programme automatiquement si besoin
	int again = 1;
	do {
		//le joueur choisit le niveau de difficult�
		int niveau = 1;
		printf("Choisissez votre niveau de difficulte (De 1 a 6) : ");
		scanf_s("%d", &niveau);

		//on cr�� la variable al�atoire que le joueur doit deviner
		srand((unsigned)time(NULL));
		int ValeurDeviner = (rand() % (int)pow(10, niveau)) + 1;		//le modulo permet de limiter l'intervalle de valeur en fonction du niveau choisi
		int ValeurPropose = 0;
		printf("\nLe but du jeu est de deviner un nombre entier");

		//on ajoute un nombre de coup
		int coup = 0;

		//on utilise une boucle pour r�p�ter la devinette jusqu'� ce que le joueur trouve le nombre
		while (!(ValeurDeviner == ValeurPropose)) {
			printf("\nEntrez un nombre entier entre 0 et %d : ", (int)pow(10, niveau));
			scanf_s("%d", &ValeurPropose);
			coup = coup + 1;

			if (ValeurPropose > ValeurDeviner) {
				printf("\nTrop grand");
			}
			if (ValeurPropose < ValeurDeviner) {
				printf("\nTrop petit");
			}
			//cr�ation d'une porte de sortie pour abandonner le jeux
			if (ValeurPropose < 0) {
				printf("\nLa valeur a trouver etait %d", ValeurDeviner);
				break;
			}
		}
		if (ValeurDeviner == ValeurPropose) {
			printf("\nVous avez gagne, bravo");
			printf("\nVous avez mis %d coups pour gagner", coup);
		}

		printf("\n\nTapez 1 pour rejouer : ");
		scanf_s("%d", &again);

		printf("\n\n");
		system("pause");
	} while (again == 1);
}