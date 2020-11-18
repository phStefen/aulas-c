#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int verificar(int);
int main()
{
	setlocale(LC_ALL,"portuguese");
    int n;
	printf("\t-  -\n\n");
	scanf("%i",&n);

	printf("Resultado: %i", verificar(n));

    return 0;
}

int verificar(int x){
    if(x>=0) return 1;
    else return 0;
}
