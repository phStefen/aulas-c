#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	printf("\t- BOOLEAN -\n\n");

	bool a=false,b=false;
	int i;

	do{
        printf("A\n0. Falso\n1. Verdadeiro\nOpção: ");
        scanf("%i",&i);
        a = i;
	}while(i < 0 || i > 1);

	do{
        printf("\nB\n0. Falso\n1. Verdadeiro\nOpção: ");
        scanf("%i",&i);
        b = i;
	}while(i < 0 || i > 1);

	if(a && b) printf("\nAmbos são Verdadeiros!\n\n");
	else if(!a && !b) printf("\nAmbos são Falsos!\n\n");
	else printf("\nSão Diferentes!\n\n");

	return 0;
}
