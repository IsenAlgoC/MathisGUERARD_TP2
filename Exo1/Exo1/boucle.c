#include <stdlib.h>
#include <stdio.h>

void main() {

	//somme des n premiers entiers positifs
	int n = 100;
	int sum = 0;
	int i;
	// avec une boucle for
	for (i = 2; i <= n; i++) {
		sum = sum + i;
		printf("%d  ", sum);
	}

	printf("\n\n");
	system("pause");
}