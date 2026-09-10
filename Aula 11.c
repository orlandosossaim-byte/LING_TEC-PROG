#include <stdio.h>
#include <stdlib.h>
#define INSS1 0.075
#define INSS2 0.09
#define INSS3 0.12
#define INSS4 0.14
#define IRPF1 0.075
#define IRPF2 0.15
#define IRPF3 0.225
#define IRPF4 0.275
#define deducao1 169.44
#define deducao2 381.44
#define deducao3 662.77
#define deducao4 896.00
//Calculador de INSS

float calc_inss(float salario){
	if(salario <= 1412.00) return salario * INSS1;
   	else if (salario >= 1412.01 && salario <= 2668.68) return salario * INSS2;
   	else if (salario >= 2666.69 && salario <= 4000.03) return salario * INSS3;
   	else return salario * INSS4;
}
float calc_IRFP(float descontoI){
	if(descontoI >= 2259.20 ) return descontoI * 1;
	else if(descontoI >= 2259.21 && descontoI <= 2826.65) return (descontoI * IRPF1) - deducao1;
	else if(descontoI >= 2826.66 && descontoI <= 3751.05) return (descontoI * IRPF2) - deducao2;
	else if(descontoI >= 3751.06 && descontoI <= 4664.68) return (descontoI * IRPF3) - deducao3;
	else return (descontoI * IRPF4) - deducao4;
}

int main(int argc, char *argv[]) {
float total, totalsemd, descontoinss, baseirpf, descontoirpf, horas, valor;
printf("Informe suas horas trabalhadas:  ");
scanf("%f", &horas);
printf("Informe o Valor de UMA hora somente: ");
scanf("%f", &valor);
totalsemd = horas * valor;
descontoinss = calc_inss(totalsemd);
baseirpf = totalsemd - descontoinss;
descontoirpf =calc_IRFP(baseirpf);
total = totalsemd - descontoinss - descontoirpf;

printf("==============================================================\n");
printf("        RECIBO DE PAGAMENTO DE SALARIO (CONTRA CHEQUE)        \n");
printf("==============================================================\n");
printf("Salario bruto (%.2f x %.2f):          R$%.2f\n", horas, valor, totalsemd );
printf("(-) Desconto INSS:                     -R$ %.2f\n", descontoinss);
printf("(-) Desconto IRPF:                     -R$ %.2f\n", descontoirpf);
printf("--------------------------------------------------------------\n");
printf("VALOR LIQUIDO A RECEBER:               R$ %.2f\n", total);
printf("==============================================================\n");




	return 0;
}


