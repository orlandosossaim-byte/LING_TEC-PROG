#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a, b, c;
	
	printf("Digite o primeiro numero que quer Multiplicar: ");
	scanf("%f", &a);
	
	printf("Digite o segundo numero que quer Multiplicar: ");
	scanf("%f", &b);
	
	c = a * b;
	printf("A Multiplicação de %f * %f = %f\n", a, b, c);
	
	return 0;
}
