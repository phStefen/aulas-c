#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

    int mat[10][20];
    int vet[10];
	printf("\t- SOMA -\n\n");

    printf("Matriz Original\n");
    for(int i=0;i<10;i++){
        vet[i]=0;
        for(int j=0;j<20;j++){
            mat[i][j] = rand()%100;
            printf("%i\t",mat[i][j]);
            vet[i]+=mat[i][j];
        }
    printf("\n");
    }

    printf("\n\n");

    for(int i=0;i<10;i++)
        printf("Soma da %iº Linha: %i\n",i+1,vet[i]);

    printf("\n\nMatriz Multiplicada\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
           printf("%i\t",mat[i][j]*vet[i]);
        }
    printf("\n");
    }

    printf("\n");
    system("pause");

    return 0;
}
