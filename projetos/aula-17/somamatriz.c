#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int somar(int[5][5]);
int main()
{
    int m[5][5];
	setlocale(LC_ALL,"portuguese");
	printf("\t- SOMA DE ELEMENTOS DA MATRIZ -\n\n");

	for(int i=0;i<5;i++)
        for(int j=0;j<5;j++){
            printf("m[%i][%i] = ",i,j);
            scanf("%i",&m[i][j]);
        }

    printf("\nA Soma da Matriz é: %i\n\n", somar(m));

    return 0;
}

int somar(int m[5][5]){
    int s;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            s+=m[i][j];
    return s;
}
