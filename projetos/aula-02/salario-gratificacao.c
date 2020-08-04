#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    float b;
    printf("Digite o Salário  Base: R$");
    scanf("%f",&b);

    b+=50 - (b*0.1);

    printf("O Salário a ser recebido será: R$%.2f",b);

    return 0;
}
