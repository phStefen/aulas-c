#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    float b,h;

    printf("Digite a Base do Tri�ngulo: ");
    scanf("%f",&b);

    printf("Digite a Altura do Tri�ngulo: ");
    scanf("%f",&h);

    printf("\nA �rea do Tri�ngulo �: %.1fm�\n",((b*h)/2));

    return 0;
}
