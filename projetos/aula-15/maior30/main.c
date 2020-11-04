#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

    int a[6][4], b[6][4];
    int qtd=0;
	printf("\t- MAIORES E DIFERENTES DE 30 -\n\n");

    printf(" Matriz A\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            a[i][j] = rand()%100;
            b[i][j] = a[i][j];

            if(b[i][j] == 30)
                b[i][j] = 0;

            printf(" %i\t",a[i][j]);
            if(a[i][j]>30)
                qtd++;
        }
    printf("\n");
    }

    printf("\n Quantidade de Números Maiores que 30: %i",qtd);

    printf("\n\n");

    printf(" Matriz B\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++)
            printf(" %i\t",b[i][j]);
    printf("\n");
    }

    return 0;
}
