#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float s, p;
    printf("Digite o Sal�rio: R$");
    scanf("%f",&s);

    printf("Digite quantos %% o Sal�rio ira Aumentar: ");
    scanf("%f",&p);

    s+=s*(p/100);

    printf("O Sal�rio ficara valendo: R$ %.2f",s);

    return 0;
}
