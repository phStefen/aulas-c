#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- QUANTIDADES DE NAEGATIVOS -\n\n");

	int qtd=0;
	for(int i=0;i<5;i++){
        int x;
        printf("Digite o %iº Número: ",i+1);
        scanf("%i",&x);

        if(x<0) qtd++;
	}
	printf("\nVocê digitou %i Número Negativos\n\n",qtd);
    return 0;
}
