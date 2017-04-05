#include <stdio.h>
#include "fibo.h"

int main(int argc, char ** argv) {
	int num = 0;
	printf("Digite el número a encontrar: ");
	scanf("%d", &num);
	printf("El fibonacci de %d es: %d   \n ",num, fibo(num));
	return 0;
}
