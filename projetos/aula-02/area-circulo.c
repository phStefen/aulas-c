#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");

    float r;

    printf("Digite o Raio do C�rculo: ");
    scanf("%f",&r);

    printf("\nA �rea do C�rculo �: %.1fm�\n", (3.14 * pow(r,2)));

    return 0;
}
