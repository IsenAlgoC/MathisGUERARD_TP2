#include <stdlib.h>
#include <stdio.h>

void main() {
	//on demande � l'utilisateur de rentrer une ann�e
	int annee = 0;
	printf("Entrez une annee pour verifier si elle est bissextile : ");
	scanf_s("%d", &annee);

	//on v�rifie si l'ann�e est bissextile
	if (annee % 400 == 0) {
		printf("\n%d est une annee bissextile", annee);
	}
	if (annee % 4 == 0) {
		if (!(annee % 100 == 0)) {
			printf("\n%d est une annee bissextile", annee);
		}
	}
	else {
		printf("\n%d n'est pas une annee bissextile", annee);
	}

	printf("\n\n");
	system("pause");

	//on v�rifie encore si elle est bissextie mais avec un comparateur unique
	if (((annee % 4 == 0) && (!(annee % 100 == 0))) || (annee % 400 == 0)) {
		printf("\n%d est une annee bissextile", annee);
	}
	else {
		printf("\n%d n'est pas une annee bissextile", annee);
	}

	printf("\n\n");
	system("pause");
}