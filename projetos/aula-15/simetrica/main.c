#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

    int a[8][8];
    int bit=0;
	printf("\t- MATRIZ SIM�TRICA -\n\n");

    printf(" Matriz A\n");
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            a[i][j] = rand()%10;
            printf(" %i\t",a[i][j]);
        }
    printf("\n");
    }

    printf("\n\n");

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++)
        if(a[i][j] != a[j][i])
            bit = 1;
    }

    if(bit == 0)
        printf("Matriz Sim�trica!");
    else
        printf("Matriz Assim�trica!");

    printf("\n\n");
    system("pause");

    return 0;
}
