#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int n, s=0;
	printf("\t- NÚMERO PERFEITO -\n\n");
	printf("Digite um Número: ");
	scanf("%i",&n);
	printf("\n0");
	for(int i=1;i<n;i++){
	    if(n%i==0){
            s+=i;
            printf(" + %i", i);
	    }
	}

	printf(" = %i\n",s);
	if(s == n) printf("É Perfeito\n\n");
	else printf("Não é Perfeito\n\n");

    return 0;
}
