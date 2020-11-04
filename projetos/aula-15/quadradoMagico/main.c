#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

    int a[4][4];
    int linha[4], coluna[4], d1=0,d2=0, bit=0;
	printf("\t- QUADRADO MÁGICO -\n\n");

    printf(" Matriz Quadrada\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            a[i][j] = 5;
            printf(" %i\t",a[i][j]);
        }
    printf("\n");
    }


    for(int i=0;i<4;i++){
        linha[i]=0;
        coluna[i]=0;
        for(int j=0;j<4;j++){
            linha[i]+=a[i][j];
            coluna[i]+=a[j][i];

            if(i==j)
                d1+=a[i][j];
            if(j == 3-i)
                d2+=a[i][j];
        }

        printf("\nSoma Linha: %i",linha[i]);
        printf("\nSoma Coluna: %i\n",coluna[i]);
    }

    printf("\nSoma da Diagonal Principal: %i",d1);
    printf("\nSoma da Diagonal Secundária: %i\n",d2);

    printf("\n\n");

    for(int i=0;i<4;i++)
        if(linha[i]!=coluna[i])
            bit=1;

    if(d1!=d2)
        bit=1;

    if(bit==0)
        printf("É um Quadrado Mágico!");
    else
        printf("Não é um Quadrado Mágico!");

    printf("\n\n");
    system("pause");

    return 0;
}
