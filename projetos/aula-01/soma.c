#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    printf("Digite 4 N�meros:\n");
    printf("1�: ");
    scanf("%d",&n1);
    printf("2�: ");
    scanf("%d",&n2);
    printf("3�: ");
    scanf("%d",&n3);
    printf("4�: ");
    scanf("%d",&n4);

    int soma = n1+n2+n3+n4;

    printf("\nO Resultado foi: %d",soma);

    return 0;
}
