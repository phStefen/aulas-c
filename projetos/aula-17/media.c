#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float media(float, float);
int main()
{
	setlocale(LC_ALL,"portuguese");

    float n1,n2;
	printf("\t- Média Aritimética -\n\n");
    printf("Informe o 1º Valor: ");
    scanf("%f",&n1);
    printf("Informe o 2º Valor: ");
    scanf("%f",&n2);

    printf("A Média de %.2f com %.2f é: %.2f\n\n", n1,n2,media(n1,n2));

    return 0;
}

float media(float n1, float n2){
    return ((n1+n2)/2);
}
