#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    float d,t;
    printf("Digite o Valor do Dep�sito: R$");
    scanf("%f",&d);

    printf("Digite a %% da Taxa de Juros: R$");
    scanf("%f",&t);

    float rend = d * (t/100);
    d+=rend;

    printf("O Rendimento ser� de R$: %.2f",rend);
    printf("\nO Total ser� de R$: %.2f",d);

    return 0;
}
