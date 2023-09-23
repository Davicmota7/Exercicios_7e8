#include <stdio.h>

int main(){

	int multiplo = 0;
	int numero;

	for (numero = 1; numero <= 5; numero ++){
		multiplo = multiplo + 3;
		printf("%d ", multiplo);
	}

	return 0;
}
