#include <stdlib.h>
#include <stdio.h>

void main() {

	//somme des n premiers entiers positifs
	int n = 5;
	int sum = 0;
	int i;
	// avec une boucle for
	for (i = 2; i <= n; i++) {
		sum = sum + i;
	}
	printf("Somme = %d \nN = %d", sum, n);
	printf("\n\n");
	system("pause");

	// avec une boucle while
	sum = 0;
	i = 2;
	while (i <= n) {
		sum = sum + i;
		i = i + 1;
	}
	printf("Somme = %d \nN = %d", sum, n);
	printf("\n\n");
	system("pause");

	// avec une boucle do while
	sum = 0;
	i = 2;
	do {
		sum = sum + i;
		i = i + 1;
	} while (!(i > n));
	printf("Somme = %d \nN = %d", sum, n);
	printf("\n\n");
	system("pause");

}