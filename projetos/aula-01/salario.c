#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float s;
    printf("Digite o Sal�rio: ");
    scanf("%f",&s);

    s+=s*.25;
    printf("O Sal�rio com 25%% de Aumento ficou: R$: %.2f",s);

    return 0;
}
