#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- CRESCENTE -\n\n");

	int v[8];

	printf("Digite 8 Valores em Ordem Crescente:\n");
	for(int i=0;i<8;i++){
        int aux=0;

        if(i>0){
            do{
                printf("Maior que %i: ", v[i-1]);
                scanf("%i",&aux);
                if(aux <= v[i-1])
                    printf("\nValor Inválido!\n");
            } while(aux <= v[i-1]);
        }
        else scanf("%i",&aux);

        v[i] = aux;
	}

	system("cls");

	for(int i=0;i<10;i++)
        printf("%i ",v[i]);

    return 0;
}
