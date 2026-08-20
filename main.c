#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	// 1 ) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
	
	// 2 ) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo).
	// A fórmula de conversão é M = K / 3,6, sendo K a velocidade em km/h e M em m/s.

	// 3 ) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.

	// 4 ) Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. 
	//A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

	// 5 ) Leia um ângulo em graus e apresente-o convertido em radianos. 
	//A fórmula de conversão é R = G * p/180, sendo G o ângulo em graus, R em radianos e p = 3.141592.

	// 6 ) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
    float suc, ant, num;
    printf("\nDigite um numero: ");
    scanf("%f", &num);
    suc = num + 1;
    ant = num - 1;
    printf("O antecessor do seu numero e %f e o sucessor e %f", ant, suc);
	// 7 ) A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que :
    //    O primeiro receberá 46% do total;
    //    O segundo receberá 32% do total;
    //    O terceiro receberá o restante.
    //    Calcule e imprima a quantia recebida por cada um dos ganhadores.
    
	// 8 ) (URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e 
	//informe-o expresso no formato horas:minutos:segundos.

    // 9 ) (URI 1017) Joãozinho quer calcular a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. 
	//Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, 
	//deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). 
	//Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.
	float kml, kmh, kmt, t;
	printf("\nQuantos Km eh a viagem: ");
	scanf("%f", &kmt);
	printf("Qual a velocidade que percorreu? ")
	kml = kmt / 12; //quantidade de litro
	
     
    //10) (URI 1013) Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:
    //MaiorAB = (a + b + abs(a - b)) / 2    
    float a, b, c, d, maior, maior_t, maior1;
    printf("\nInforme os valores a serem comparados: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    maior_t = (a+b+abs(a-b))/2;
    maior1 = (maior_t+c+abs(maior_t-c))/2;
    maior = (maior1 +d+abs(maior1-d))/2;
        

    printf("O maior entre |%f|%f|%f|%f| = %.2f", a,b,c,d, maior);


	
	
	
	
	
	return 0;
}
