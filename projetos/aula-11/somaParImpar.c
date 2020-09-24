#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- SOMA DOS PARES & DOS ÍMPARES -\n\n");
	int x=0,i=1;
	int tp=0, ti=0;

	do{
        printf("Digite o %iº Número: ",i);
        scanf("%i",&x);

        if(x%2==0) tp+=x;
        else ti+=x;

        i++;
	}while(x<=1000);

	printf("\n\nSoma dos Pares: %i",tp);
	printf("\nSoma dos Ímpares: %i\n\n",ti);
	system("pause");

    return 0;
}
