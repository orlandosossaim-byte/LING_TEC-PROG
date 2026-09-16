#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, d, aux;
	printf("Informe o valor de (a,b,c,d):\n ");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	aux = a;
	a = b;
	b = aux;
	aux = c;
	c = a;
	a = aux;
	aux = d;
	d = c;
	c = aux;
	printf("seu valor permutado eh de: %d %d %d %d", a, b, c, d);
	
	float valort, totala, VPA, pa, PVP;
	printf("\nQual o valor patrimornial liquido da empresa: ");
	scanf("%f", &valort);
	printf("\nQual o numero total de acoes: ");
	scanf("%f", &totala);
	printf("\nQual preco atual da acao: ");
	scanf("%f", &pa);
	VPA = valort / totala;
	PVP = pa / VPA;
	if(PVP <= 0.0){
		printf("PVP: %.2f Pessimo\n", PVP);
	}
	else if(PVP <= 0.8){
		printf("PVP: %.2f Otima\n", PVP);
	}
	else if(PVP <= 1.2){
		printf("PVP: %.2f Indeferente\n", PVP);
	}
	else if(PVP <= 2.0){
		printf("PVP: %.2f Boa\n", PVP);
	}
	else{
		printf("PVP: %.2f Ruim\n", PVP);
	}
	
	printf("===============================================\n");
	printf("=================== VALORES ===================\n");
	printf("===============================================\n");
	printf("Valor patrimornial da empresa:  R$ %.2f\n", valort);
	printf("Quantidade de acoes da empresa: R$ %.2f\n", totala);
	printf("Preco atual da acao:            R$ %.2f\n", pa);
	printf("O VPA da empresa:               R$ %.2f\n", VPA);
	return 0;
}
