#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- PRODUTO MATRICIAL -\n\n");

    int a[4][5];
    int b[5][2];
    int c[4][2];
    int soma=0, mult=0;
    printf("Matriz A\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            a[i][j] = rand()%10;
            printf("%i\t",a[i][j]);
        }
    printf("\n");
    }

    printf("\n\n");

    printf("Matriz B\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            b[i][j] = rand()%10;
            printf("%i\t",b[i][j]);
        }
    printf("\n");
    }

    for(int i=0;i<4;i++){
        for(int k=0;k<2;k++){
            for(int j=0;j<5;j++){
                soma+=a[i][j] * b[j][k];
            }
            c[i][k] = soma;
            soma = 0;
        }
    }
    printf("\n\nMatriz C\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++)
            printf("%i\t",c[i][j]);
        printf("\n");
    }

    printf("\n\n");

    system("pause");
    return 0;
}
