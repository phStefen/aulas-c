#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int qtd25=0, qtd50=0, qtd75=0, qtd100=0, x;
	printf("\t- INTERVALOS -\n\n");
	do{
        printf("Digite um Valor: ");
        scanf("%i",&x);

        if(x <= 25) qtd25++;
        else if(x <= 50) qtd50++;
        else if(x <= 75) qtd75++;
        else qtd100++;
	}while(x>=0);

	printf("\n0 - 25: %i",qtd25);
	printf("\n26 - 50: %i",qtd50);
	printf("\n51 - 75: %i",qtd75);
	printf("\n76 - 100: %i\n\n",qtd100);
    return 0;
}
