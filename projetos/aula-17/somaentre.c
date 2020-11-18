#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int soma(int, int);
int main()
{
	setlocale(LC_ALL,"portuguese");

    int n1, n2;
	printf("\t- SOMA DOS NÚMEROS NO INTERVALO -\n\n");
	printf(" Insira Dois Números na mesma Linha: ");
    scanf("%i %i", &n1, &n2);

    printf(" A Soma dos Números entre %i e %i é: %i\n\n",n1,n2,soma(n1,n2));
    return 0;
}

int soma(int n1, int n2){
    int soma=0;
    for(int i=n1+1;i<n2;i++)
        soma+=i;
    return soma;
}
