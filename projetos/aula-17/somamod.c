#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int soma(int,int,int);
int main()
{
	setlocale(LC_ALL,"portuguese");

    int mod,a,b;
	printf("\t- SOMA DOS DIVISÍVEIS -\n\n");

	do{
        printf(" Insira o Divisor: ");
        scanf("%i",&mod);
	} while(mod<=1);

	printf(" Insira o Intervalo (2 valores na mesma linha): ");
	scanf("%i %i", &a,&b);

	printf("\n A Soma dos Números Divisíveis por %i do Intervalo de %i até %i é: %i\n\n", mod, a, b, soma(mod,a,b));
    return 0;
}

int soma(int mod, int a, int b){
    int soma=0;
    for(int i=a;i<=b;i++)
        if(i%mod==0)
            soma+=i;
    return soma;
}
