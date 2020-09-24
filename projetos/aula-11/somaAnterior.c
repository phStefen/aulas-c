#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

    int n;
    int an=0, at=1;
	printf("\t- SOMA DO ANTERIOR -\n\n");
	printf("Digite o Valor de N: ");
	scanf("%i",&n);

    for(int i=0;i<n;i++){
        printf("%i ",at);
        at += an;
        an = at - an;
    }

    printf("\n\n");

    return 0;
}
