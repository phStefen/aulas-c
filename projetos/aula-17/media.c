#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float media(float, float);
int main()
{
	setlocale(LC_ALL,"portuguese");

    float n1,n2;
	printf("\t- M�dia Aritim�tica -\n\n");
    printf("Informe o 1� Valor: ");
    scanf("%f",&n1);
    printf("Informe o 2� Valor: ");
    scanf("%f",&n2);

    printf("A M�dia de %.2f com %.2f �: %.2f\n\n", n1,n2,media(n1,n2));

    return 0;
}

float media(float n1, float n2){
    return ((n1+n2)/2);
}
