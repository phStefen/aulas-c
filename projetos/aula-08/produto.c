#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	float produto = 10, desconto;
	int opc;

	do{
	    system("cls");
        printf("\t- MERCADINHO DO BOTILA -\n");
        printf("\tTotal do Carrinho: R$ %.2f\n\n",produto);
        printf("Informe o Método de Pagamento:\n1. Á Vista\n2. Parcelado\nOpção: ");
        scanf("%i",&opc);
	}while(opc < 1 || opc > 2);

    system("cls");

	switch(opc){
    // A VISTA
    case 1:
        do{
            system("cls");
            printf("\t- MERCADINHO DO BOTILA -\n");
            printf("\tTotal do Carrinho: R$ %.2f\n\n",produto);
            printf("Informe o Método de Pagamento:\n1. Dinheiro\n2. Cheque\n3. Cartão de Crédito\nOpção: ");
            scanf("%i",&opc);
        }while(opc < 1 || opc > 3);

        if(opc<3) desconto = 0.1;
        else desconto = 0.15;
        break;

    // PARCELADO
    case 2:
        printf("\t- MERCADINHO DO BOTILA -\n");
        printf("\tTotal do Carrinho: R$ %.2f\n\n",produto);
        printf("Quantia de Parcelas: ");
        scanf("%i",&opc);

        if(opc < 2) desconto = 0.15;
        else if(opc < 3) desconto = 0;
        else desconto = -0.1;
        break;
	}

    system("cls");
    printf("\t- MERCADINHO DO BOTILA -\n");
    printf("\tTotal do Carrinho: R$ %.2f\n\n",produto);
    if(desconto > 0) printf("Total a Pagar: R$ %.2f\nDesconto: %.0f%%\n\n", produto-=produto*desconto, desconto*100);
    else{
        float total=0, juros = produto*desconto*-1;

        for(int i=0;i<opc;i++){
            total+=(produto/opc) + juros;
        }

        printf("Total a Pagar: R$ %.2f\nJuros: %.0f%%\n\n", total, desconto*-100);
    }

    return 0;
}
