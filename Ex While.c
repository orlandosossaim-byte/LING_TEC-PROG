#include <stdio.h>
#include <stdlib.h>

// Exercício 1: contar do primeiro valor até o segundo, com passo
void exercicio1() {
    int a, b, passo;

    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Segundo valor: ");
    scanf("%d", &b);
    printf("Passo: ");
    scanf("%d", &passo);

    passo = abs(passo);

    if (passo == 0) {
        printf("O passo nao pode ser zero!\n");
        return;
    }

    while (a <= b) {
        printf("%d ", a);
        a = a + passo;
    }
    printf("\n");
}

// Exercício 2: soma 1/2 + 1/4 + 1/8 + ... (n termos)
void exercicio2() {
    int n, i;
    double termo = 1.0, soma = 0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        termo = termo / 2;
        soma = soma + termo;
    }
    printf("S = %.50lf\n", soma);
}

// Exercício 3: triângulo de Pascal
void exercicio3() {
    int n, i, j, esp, c;

    printf("Quantas linhas? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (esp = 0; esp < n - i - 1; esp++) {
            printf("  ");
        }
        c = 1;
        for (j = 0; j <= i; j++) {
            printf("%4d", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

int main() {
    int opcao;
    do {
        printf("\n1 - Contagem com passo\n");
        printf("2 - Soma da sequencia\n");
        printf("3 - Triangulo de Pascal\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                exercicio1();
                break;
            case 2:
                exercicio2();
                break;
            case 3:
                exercicio3();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
    return 0;
}
