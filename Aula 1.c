#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a, b, c;
	//Aula feita no dia 06/08/26, o professor fez somente com o printf, o scanf eu adicionei!
	printf("Digite o primeiro numero que quer Multiplicar: ");
	scanf("%f", &a);
	
	printf("Digite o segundo numero que quer Multiplicar: ");
	scanf("%f", &b);
	
	c = a * b;
	printf("A Multiplicação de %f * %f = %f\n", a, b, c);
	
	return 0;
}
