#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	float mat[4][7];
	float menor, maior=0;
	int linha, coluna;
	printf("\t- MINXMAX -\n\n");

    printf("Matriz\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<7;j++){
            mat[i][j] = rand()%50;

            if(i==0 && j==0)
                menor = mat[i][j];

            printf("%.2f\t",mat[i][j]);
            if(mat[i][j] < menor){
                menor = mat[i][j];
                linha = i;
            }
        }
    printf("\n");
    }

    for(int i=0;i<7;i++){
        if(mat[linha][i] > maior){
            maior = mat[linha][i];
            coluna = i;
        }
    }

    printf("\n\n");

    printf("Minmax: [%i][%i] = %.2f\n\n",linha,coluna,mat[linha][coluna]);
    system("pause");
    return 0;
}
