#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float mais(float, float);
float menos(float, float);
float vezes(float, float);
float dividido(float, float);

int main()
{
	setlocale(LC_ALL,"portuguese");

    float n1,n2;
	printf("\t- CALCULADORA -\n\n");

    printf("Informe o 1º Valor: ");
    scanf("%f",&n1);
    printf("Informe o 2º Valor: ");
    scanf("%f",&n2);

    printf("\n\n%.2f + %.2f = %.2f\n",n1,n2, mais(n1,n2));
    printf("%.2f - %.2f = %.2f\n",n1,n2,menos(n1,n2));
    printf("%.2f * %.2f = %.2f\n", n1,n2,vezes(n1,n2));
    printf("%.2f / %.2f = %.2f\n\n", n1,n2,dividido(n1,n2));
    return 0;
}

float mais(float n1, float n2){
    return n1+n2;
}

float menos(float n1, float n2){
    return n1-n2;
}

float vezes(float n1, float n2){
    return n1*n2;
}

float dividido(float n1, float n2){
    return n1+n2;
}
