#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");

    float r;

    printf("Digite o Raio do Círculo: ");
    scanf("%f",&r);

    printf("\nA Área do Círculo é: %.1fm²\n", (3.14 * pow(r,2)));

    return 0;
}
