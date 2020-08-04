#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    printf("Digite 4 Números:\n");
    printf("1º: ");
    scanf("%d",&n1);
    printf("2º: ");
    scanf("%d",&n2);
    printf("3º: ");
    scanf("%d",&n3);
    printf("4º: ");
    scanf("%d",&n4);

    int soma = n1+n2+n3+n4;

    printf("\nO Resultado foi: %d",soma);

    return 0;
}
