#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	// 1 ) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
	printf("\nCalcular o ano de nascimento a partir do ano atual\n");
	float id, at, an;
	printf("digite sua idade: ");
	scanf("%f", &id);
	printf("digite o ano atual :");
	scanf("%f", &at);
	an = at - id;
	printf("O ano que voce nasceu e de : %f\n", an);
	
	// 2 ) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo).
	// A fórmula de conversão é M = K / 3,6, sendo K a velocidade em km/h e M em m/s.
	printf("\nCalcular Velocidade\n");
	float km, ms, v;
	printf("Digite a velocidade em km por hora: ");
	scanf("%f", &km);
	ms = km / 3.6;
	v = km / 3.6;
	printf("A sua velocidade convertida e de : %f\n", v);

	// 3 ) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
	printf("\nCotacao do dolar\n");
	float real, dolar, vl;
	printf("Digite o valor que deseja converter para dolar: ");
	scanf("%f", &real);
	vl = real * 5.16;
	dolar = vl;
	printf("O valor e de: %f\n", vl);

	// 4 ) Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. 
	//A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
	printf("\nConversao de temperatura\n");
	float cel, fire, temp;
	printf("Digite a temperatura que deseja converter: ");
	scanf("%f", &cel);
	temp = (cel * (9.0/5.0)) + 32;
	fire = temp;
	printf("A temperatura e de: %f\n", temp);
	
	// 5 ) Leia um ângulo em graus e apresente-o convertido em radianos. 
	//A fórmula de conversão é R = G * p/180, sendo G o ângulo em graus, R em radianos e p = 3.141592.
	printf("\nLer angulo em graus\n");
	float pi = 3.141592;		
	float g, res;
	printf("Digite o valor do angulo em graus: ");
	scanf("%f", &g);
	res = (g * pi)/180;
	printf("O resultado em radiano e de: %f\n", res);

	// 6 ) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
	printf("\nAntecessor e sucessor\n");
    float suc, ant, num;
    printf("Digite um numero: ");
    scanf("%f", &num);
    suc = num + 1;
    ant = num - 1;
    printf("O antecessor do seu numero e %f e o sucessor e %f", ant, suc);
    
	// 7 ) A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que :
    //    O primeiro receberá 46% do total;
    //    O segundo receberá 32% do total;
    //    Calcule e imprima a quantia recebida por cada um dos ganhadores.
	float g1, g2, g3;
    printf("\nQuantidade recebida por cada ganhador\n");
	printf("O premio e de  R$780.000");
	g1 = 0.46 * 780.000;
	g2 = 0.32 * 780.000;
	g3 = 780.000-(g1 + g2);
	
	printf("O resultado do ganhador 1 e de: %f\n", g1);
	printf("O resultado do ganhador 2 e de: %f\n", g2);
	printf("O resultado do ganhador 3 e de: %f\n", g3);
    
	// 8 ) (URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e 
	//informe-o expresso no formato horas:minutos:segundos.
	printf("\nTempo de duracao\n");
	int seg, hr, m;
	printf("Qual o tempo de duracao do evento em segundos? ");
	scanf("%d", &seg);
	hr = seg / 3600;
	m = (seg % 3600) / 60;
	printf("%d hora(s) e %d minuto(s)\n", hr, m);

    // 9 ) (URI 1017) Joãozinho quer calcular a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. 
	//Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, 
	//deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). 
	//Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.
	printf("\nCalcular a Velocidade\n");
	float  tempo, vel, distancia, litros;
    printf("Quanto tempo ira demorar a viagem? ");
    scanf("%f", &tempo);
    printf("Qual a velocidade media em km? ");
    scanf("%f", &vel);
    
    distancia = tempo * vel;
    litros = distancia / 12.0;
    
    printf("Foram percorridos %.2f km\n", distancia);
    printf("Serao necessarios %.3f litros\n", litros);
     
    //10) (URI 1013) Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:
    //MaiorAB = (a + b + abs(a - b)) / 2    
    printf("\nQuatro valores a serem comparados\n");
    float a, b, c, d, maior, maior_t, maior1;
    printf("\nInforme os valores a serem comparados: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    maior_t = (a+b+abs(a-b))/2;
    maior1 = (maior_t+c+abs(maior_t-c))/2;
    maior = (maior1 +d+abs(maior1-d))/2;
    printf("O maior entre |%f|%f|%f|%f| = %.2f", a,b,c,d, maior);
	return 0;
}
