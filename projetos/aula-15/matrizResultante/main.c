#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- MATRIZ RESULTANTE -\n\n");
    int a[2][2];
    int b[2][2];
    int maior=0;

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++){
            printf("[%i][%i] - Digite um Valor:  ",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]>maior)
                maior = a[i][j];
        }

    system("cls");

	printf("\t- MATRIZ RESULTANTE (Maior Valor: %i) -\n\n",maior);
	printf("Matriz A:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            printf("%i ",a[i][j]);
	printf("\n\nMatriz B:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            printf("%i ",a[i][j]*maior);

    printf("\n\n");
    system("pause");
    return 0;
}
