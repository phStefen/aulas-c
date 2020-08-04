#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    float b,h;

    printf("Digite a Base do Triângulo: ");
    scanf("%f",&b);

    printf("Digite a Altura do Triângulo: ");
    scanf("%f",&h);

    printf("\nA Área do Triângulo é: %.1fm²\n",((b*h)/2));

    return 0;
}
