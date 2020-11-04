#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int v[6];
	int sp=0,si=0;
	printf("\t- SOMA DOS PARES & ÍMPARES -\n\n");

	printf("Insira 6 Valores:\n");
	for(int i=0;i<6;i++)
        scanf("%i",&v[i]);

    system("cls");

	printf("\t- RELATÓRIO -\n\n");
	printf("Os Números Pares são:");
	for(int i=0;i<6;i++)
        if(v[i]%2==0){
            printf("\t\nnúmero %i na posição %i", v[i], i+1);
            sp+=v[i];
        }
    printf("\nSoma dos pares = %i\n\n",sp);

    	printf("Os Números Ímpares são:");
	for(int i=0;i<6;i++)
        if(v[i]%2==1){
            printf("\t\nnúmero %i na posição %i", v[i], i+1);
            si+=v[i];
        }
    printf("\nSoma dos pares = %i\n\n",si);

    return 0;
}
