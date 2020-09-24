#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- PRODUTO -\n\n");

	int i=1;
	float x, p=1;
	printf("(Digite '0' para encerrar)\n\n");
	do{
        printf("Digite o %iº Número: ",i);
        scanf("%f",&x);
        if(x!=0){
            p*=x;
            i++;
        }
	}while (x!=0);

	printf("\nResultado: %.2f\n\n",p);

    return 0;
}
