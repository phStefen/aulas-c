#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int qtd25=0, qtd50=0, qtd75=0, qtd100=0, x;
	int s=0;
	printf("\t- SOMA DOS PARES -\n\n");
	do{
        printf("Digite um Valor: ");
        scanf("%i",&x);
        if(x%2==0) s+=x;
	}while(x!=0 || x>0);

	printf("\nTotal dos Pares: %i\n\n",s);
    return 0;
}
