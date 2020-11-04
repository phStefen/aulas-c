#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

    int qtd[10];
    int totalQtd=0;
    float preco[10];

	printf("\t- VENDAS -");

    for(int i=0;i<10;i++){
        printf("\t\n\n- %iº Vendedor -\nPeças Vendidas: ",i+1);
        scanf("%i",&qtd[i]);
        printf("Valor da Peça: R$: ");
        scanf("%f",&preco[i]);

        totalQtd+=qtd[i];
    }

    system("cls");

	printf("\t- VENDAS -");

    for(int i=0;i<10;i++){
        printf("\t\n\n- %iº Vendedor -\nTotal de Vendas: R$: %.2f",i+1,preco[i]*qtd[i]);
    }

    printf("\n\nQuantidade de Produtos Vendidos: %i\n\n",totalQtd);
    return 0;
}
