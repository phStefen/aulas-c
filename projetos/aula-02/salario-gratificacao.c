#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    float b;
    printf("Digite o Sal�rio  Base: R$");
    scanf("%f",&b);

    b+=50 - (b*0.1);

    printf("O Sal�rio a ser recebido ser�: R$%.2f",b);

    return 0;
}
