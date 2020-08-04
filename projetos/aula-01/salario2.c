#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float s, p;
    printf("Digite o Salário: R$");
    scanf("%f",&s);

    printf("Digite quantos %% o Salário ira Aumentar: ");
    scanf("%f",&p);

    s+=s*(p/100);

    printf("O Salário ficara valendo: R$ %.2f",s);

    return 0;
}
