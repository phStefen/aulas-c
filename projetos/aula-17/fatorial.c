#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fatorial(int);
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- FUNÇÃO DE FATORIAL -\n\n");
    int x;
    printf("Informe um Número: ");
    scanf("%d",&x);

    printf("Fatorial de %d: %d\n\n", x, fatorial(x));
    return 0;
}

int fatorial(int x){
    int fat = 1;
    for(int i=1;i<=x;i++)
        fat*=i;
    return fat;
}
