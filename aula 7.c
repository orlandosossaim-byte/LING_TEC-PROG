#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    // Variaveis de decisão como int para permitir o uso do operador %
    int base, altura; 
    float hipo, area, sum, sub, mult, div;

    printf("Insira o primeiro valor: ");
    scanf("%d", &base);

    printf("Insira o segundo valor: ");
    scanf("%d", &altura);

    if (base > 0 && altura > 0) {
        if (base < 10 && altura < 10) {
            if ((altura == 2 || altura == 3 || altura == 5 || altura == 7) && 
                (base == 2 || base == 3 || base == 5 || base == 9)) {
                
                area = (float)(altura * base) / 2;
                hipo = sqrt(altura * altura + base * base);
                printf("Area %f e hipotenusa %f\n", area, hipo);
                
            } else {
                sum = (float)altura + base;
                sub = (float)altura - base;
                mult = (float)altura * base;
                div = (float)altura / base;
                printf("%f, %f, %f, %f\n", sum, sub, mult, div);
            }
        } else {
            if (altura % base == 0) {
                printf("sim\n");
            } else {
                printf("nao\n");
            }
        }
    } else {
        printf("%d %d\n", (altura * -1), (base * -1));
    }

    return 0;
}

