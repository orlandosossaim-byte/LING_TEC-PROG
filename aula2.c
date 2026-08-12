#define pi 3.14159 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main(int argc, char *argv[]) { 
    float area, raio, r2; 
    printf("Insira o raio do circulo: "); 
    scanf("%f", &raio); 
    r2 = raio * raio; 
    area = pi * r2; 
    printf("A area do circulo de raio %f = %f\n", raio,area); 
    
    printf("Agora do trapezio\n");
    float Bmenor, Bmaior, h, b, A;
    printf("Insira a Base menor: ");
    scanf("%f", &Bmenor);
    printf("Insira a Base maior: ");
    scanf("%f", &Bmaior);
    printf("Insira a Altura(h): ");
    scanf("%f", &h);
    b = Bmenor + Bmaior;
    A = (b*h)/2;
    printf("A area do trapezio para bases %f e %f com altura %f = %f\n", Bmaior, Bmenor, h, A);
    
    return 0; 
}
