#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int multDigito(int dig, int valor){
	return dig*valor;
}

int main(int argc, char *argv[]) {
	int d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,soma,restoII,resto;
	printf("-----> INFORME SEU CPF <-----\n");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &d0,&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&d10);
	printf("Confirme o cpf %d %d %d . %d %d %d . %d %d %d - %d %d", d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10);
	soma = multDigito(d0,11)+multDigito(d1,10)+multDigito(d2,9)+multDigito(d3,9)+
	    	multDigito(d4,8)+multDigito(d5,7)+multDigito(d6,6)+multDigito(d7,5)+
			multDigito(d8,4)+multDigito(d9,3)+multDigito(d10,2);
	soma *=10;
	restoII = soma%11;
	if(restoII == 10) resto = 0;
	printf("\n%d", restoII);
	
		soma = multDigito(d0,11)+multDigito(d1,10)+multDigito(d2,9)+multDigito(d3,9)+
	    	multDigito(d4,8)+multDigito(d5,7)+multDigito(d6,6)+multDigito(d7,5)+
			multDigito(d8,4)+multDigito(d9,3)+multDigito(d10,2);
	soma *=10;
	resto = soma%11;
	if(resto == 10) restoII = 0;
	printf("\n%d", resto);
	return 0;
}
