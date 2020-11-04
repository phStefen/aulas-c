#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int num[9];
	printf("\t- NÚMEROS PRIMOS -\n\n");

	for(int i=0;i<9;i++){
        printf("Digite o %iº Valor: ",i+1);
        scanf("%i",&num[i]);
	}

	system("cls");
	printf("\t- NÚMEROS PRIMOS -\n\n");

    for(int i=0;i<9;i++){
        int x=0;
        for(int j=1;j<=num[i];j++){
            if(num[i]%j==0) x++;
        }
        if(x==2) printf("Número: %i\nPosição: %iº\n\n",num[i],i+1);
	}

    return 0;
}
