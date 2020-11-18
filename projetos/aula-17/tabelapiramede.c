#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void montar(int);
int main()
{
    int n;

	setlocale(LC_ALL,"portuguese");
	printf("\t- TABELA DO NÚMERO -\n\n");
	do{
        printf("Insira um Número de 1 até 9: ");
        scanf("%i", &n);
	} while(n<1 || n>9);

    montar(n);
    return 0;
}

void montar(int n){
    printf("\n");
    for(int i=1;i<=n;i++){
        printf("\n");
        printf("%i ", i);

        if(i==1)
            continue;

        for(int j=2;j<=i;j++){
            printf("%i ",i*j);
        }
    }
    printf("\n\n");
}
