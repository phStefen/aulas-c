#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int n;
	printf("\t__ +5 || +8 __\n\n");
	printf("Digite um N�mero: ");
	scanf("%i",&n);

	if(n%2==0) n+=5;
	else n+=8;

	printf("\nResultado: %i\n\n",n);


    return 0;
}
