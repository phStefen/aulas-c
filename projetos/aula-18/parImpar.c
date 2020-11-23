#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int isPar(int);
int main()
{
	setlocale(LC_ALL,"portuguese");

    int n;
	printf("\t- PAR OU ÍMPAR -\n\n");
    printf("Digite um Número: ");
    scanf("%i",&n);

    printf("Retornou: %i\n\n", isPar(n));
    return 0;
}

int isPar(int x){
    if(x%2==0)
        return 1;
    else return 0;
}
