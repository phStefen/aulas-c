#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int opc=0;
	float num[5];
	printf("\t- CÓDIGO -\n\n");

    printf("0. Sair");
	printf("\n1. Direta");
	printf("\n2. Inversa");
	printf("\nOpção: ");
	scanf("%i",&opc);

    system("cls");
    printf("\t- CÓDIGO -\n\n");

	if(opc>0){
        printf("Insira 5 Valores:\n");
        for(int i=0;i<5;i++)
            scanf("%f",&num[i]);

        printf("\n");
        if(opc == 1)
            for(int i=0;i<5;i++)
                printf("%.2f ",num[i]);
        else
            for(int i=4;i>=0;i--)
                printf("%.2f ",num[i]);

        printf("\n\n");
	}

    return 0;
}
