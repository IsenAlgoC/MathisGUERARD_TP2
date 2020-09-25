#include <stdlib.h>
#include <stdio.h>

void main() {

	//somme des n premiers entiers positifs
	int n = 100;
	unsigned short int sum = 0;
	int i;
	//avec une boucle for
	for (i = 2; i <= n; i++) {
		sum = sum + i;
	}
	printf("Somme = %d \nN = %d", sum, n);
	printf("\n\n");
	system("pause");

	//avec une boucle while
	sum = 0;
	i = 2;
	while (i <= n) {
		sum = sum + i;
		i = i + 1;
	}
	printf("Somme = %d \nN = %d", sum, n);
	printf("\n\n");
	system("pause");

	//avec une boucle do while
	sum = 0;
	i = 2;
	do {
		sum = sum + i;
		i = i + 1;
	} while (!(i > n));
	printf("Somme = %d \nN = %d", sum, n);
	printf("\n\n");
	system("pause");

	//on calcule la valeur max de n sans dépassement de capacité
	//on utilise la boucle while créée précedemment
	n = 1;
	sum = 0;
	while (!(n == 0)) {
		sum = sum + n;
		if (65535 - sum < n+1) {
			break;
		}
		n = n + 1;
	}
	printf("La valeur max de n est : %d \nPour la somme : %d", n, sum);
	printf("\n\n");
	system("pause");

	//test numéro 3, demander à l'utilisateur de rentrer une valeur de n
	//on reprend la boucle for précédente
	printf("Rentrez une valeur pour n : ");
	scanf_s("%d", &n);
	sum = 0;
	for (i = 2; i <= n; i++) {
		sum = sum + i;
	}
	printf("Somme = %d \nN = %d", sum, n);
	printf("\n\n");
	system("pause");

	//même exercice que le précédent mais en demandant à l'utilisateur de modifier son entrée si n est trop grand
	//on passe d'une boucle for à une boucle while
	n = 74873;
	while (n > 361) {
		printf("Rentrez une valeur pour n : ");
		scanf_s("%d", &n);
	}
	sum = 0;
	for (i = 2; i <= n; i++) {
		sum = sum + i;
	}
	printf("Somme = %d \nN = %d", sum, n);
	printf("\n\n");
	system("pause");
}