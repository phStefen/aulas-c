#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int n=0;
	float e=0;
	printf("\t- 1/1 ... + 1/N -\n\n");

    printf("Digite o valor de N: ");
    scanf("%i",&n);

	printf("\nE =");
	for(int i=1;i<=n;i++){
        printf(" 1/%i",i);
        if(i!=n) printf(" +");
        e+=1/i;
	}

	printf("\nE = %.2f\n\n",e);

    return 0;
}
