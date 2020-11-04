#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

    int vet[18], mat[3][6];
	printf("\t- VETOR PARA MATRIZ -\n\n");

    printf(" Vetor\n");
    for(int i=0;i<18;i++){
        vet[i] = rand()%50;
        printf(" %i\t",vet[i]);
    }

    printf("\n\n");

    printf(" Matriz\n");
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            mat[i][j] = vet[k];
            k++;
            printf(" %i\t",mat[i][j]);
        }
    printf("\n");
    }

    printf("\n\n");
    system("pause");

    return 0;
}
