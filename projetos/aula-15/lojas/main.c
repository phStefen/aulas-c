#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	float precos[4][8];
	printf("\t- LOJAS -\n\n");
    for(int i=0;i<8;i++){
        printf("%i� Loja\n",i+1);
        for(int j=0;j<4;j++){
            printf("Pre�o do %i� Produto: R$: ",j+1);
            scanf("%f",&precos[j][i]);
        }
    }

    system("cls");
	printf("\t- LOJAS -\n\n");
    for(int i=0;i<8;i++){
        printf("%i� Loja\n",i+1);
        for(int j=0;j<4;j++){
            if(precos[j][i]<=120)
                printf("Pre�o do %i� Produto: R$: %.2f\n",j+1,precos[j][i]);
        }
        printf("\n");
    }

    return 0;
}
