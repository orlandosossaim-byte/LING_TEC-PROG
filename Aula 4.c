#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	// 1 ) Faça um programa que leia dois numeros inteiros e depois os imprima na ordem inversa em que eles foram lidos
	int primeiro, segundo, aux;
	printf("Insira o primeiro numero: ");
	scanf("%d", &primeiro);
	printf("Insira o segundo numero: ");
	scanf("%d", &segundo);
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	printf("%d,%d\n", primeiro, segundo);
	
	// 2 ) Faça um programa que leia um valor tipo double e depois o imprima na forma de notação cientifica
	double valor;
	printf("Insira o valor que deseja ver em notacao cientifica: ");
	scanf("%lf", &valor);
	printf("Valor em notacao cientifica : %e\n ", valor);
	
	// 3 ) Implemente um programa que leia um numero N e mostre na tela o seu valor em base binaria (bits)
	int n, b64, b32, b16, b8, b4, b2, resultado;
	printf("Entre com o valor para conversao: ");
	scanf("%d", &n);
	b64 = resultado%2;
	resultado = resultado/2;
	b32 = resultado%2;
	resultado = resultado/2;
	b16 = resultado%2;
	resultado = resultado/2;
	b8 = resultado%2;
	resultado = resultado/2;
	b4 = resultado%2;
	resultado = resultado/2;
	b2 = resultado%2;
	resultado = resultado/2;
	printf("O numero %d em binario = %d%d%d%d%d%d%d", n, resultado%2, b2, b4, b8, b16, b32, b64);
	// 4 ) Faça um programa que leia, o salario fixo e o valor total em vendas de um vendedor. 
	//Sabendo que este vendedor ganha 15% de comissao sobre suas vendas efetuadas, mostre o total a receber no final do mes , com duas casas decimais
	float va, com, venda, total;
	printf("\nDigite o valor de seu salario: ");
	scanf("%f", &va);
	printf("Digite o total de suas vendas: ");
	scanf("%f", &venda);
	com = venda * 0.15;
	total = com + va;
	printf("O valor total que ira receber e de: %.2f", total);
	
	// 5 ) Elabore um programa que peca ao usuario para digitar 4 valores. E mostre na tela a soma, a media, e o produtorio desses valores
	float v1, v2, v3, v4, media, soma, produtorio;
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &v1);
	printf("Digite o segundo valor: ");
	scanf("%f", &v2);
	printf("Digite o terceiro valor: ");
	scanf("%f", &v3);
	printf("Digite o quarto valor: ");
	scanf("%f", &v4);
	soma = v1 + v2 + v3 + v4;
	media = soma / 4;
	produtorio = v1 * v2 * v3 * v4;
	printf("A soma dos valores e: %f , a media dos valores e: %f , o produtorio dos valores e: %f", soma, media, produtorio);
	
	// 6 ) Leia um valor inteiro correspondente a idade de uma pessoa em dias e informe-as em anos meses e dias
	float idade, anos, meses, dias;
	printf("\nInsira sua idade: ");
	scanf("%f", &idade);
	meses = idade*12;
	dias = idade*365;
	printf("Voce tem %f anos, %f meses, %f dias", idade, meses, dias);
	
	// 7 ) Faça um programa que calcule o volume de uma esfera senfo fornecido o valor de seu raio (R)
	//A formula para calcular o volume é: (4/3)*pi*r³. Considere pi = 3.14159
	float V, r3, r;
	float pi = 3.14159;
	printf("\nQual e o raio da esfera?: ");
	scanf("%f", &r);
	r3 = r * r * r;
	V = (4*pi*r3)/3;
	printf("O valor do volume da esfera e: %f\n", V);
	// 8 ) Leia os quatro valores do usuario correspondentes as coordenadas em um plano cartesiano,p1(x1,y1) e
	//p2(x2,y2) e calcule e mostre a distancia entre eles, aplicando a distancia euclidiana, segundo a formula.
	//d=raiz((x2-x1)²+(y2-y1)²)
	float x1, y1, x2, y2, aux1, aux2, aux3, aux4, aux5, d, p1, p2;
	printf("Digite o primeiro valor da coordenada (x1): ");
	scanf("%f", &x1);
	printf("Digite o primeiro valor da coordenada (y1): ");
	scanf("%f", &y1);
	printf("Digite o primeiro valor da coordenada (x2): ");
	scanf("%f", &x2);
	printf("Digite o primeiro valor da coordenada (y2): ");
	scanf("%f", &y2);
	//(x2-x1)²+(y2-y1)²
    p1 = pow(x2-x1, 2);
    p2 = pow(y2-y1, 2);
    d = sqrt(p1+p2);
	printf("A distancia euclidiana e de: %f", d);

		return 0;
}
