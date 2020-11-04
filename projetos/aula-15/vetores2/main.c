#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- MATRIZ -\n\n");
	int a[4][4];
	int b[4][4];

	for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            a[i][j] = 0;

	for(int i=0;i<4;i++)
        a[i][1]=1;

	for(int i=0;i<4;i++)
        a[i][i]=0;

	for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            b[i][j] = a[i][j]*2;

    printf("Matriz A:\n");
	for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            printf("%i ",a[i][j]);
        printf("\n");
	}

    printf("\n\n");

    printf("Matriz B:\n");
	for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            printf("%i ",b[i][j]);
        printf("\n");
	}
    return 0;
}
