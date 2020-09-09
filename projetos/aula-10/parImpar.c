#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int a,b;
	do{
        system("cls");
        printf("\t- ÍMPAR OU PAR -\n\n");
        printf("Digite o Início: ");
        scanf("%i",&a);

        if(a<0){
            printf("\nNúmero Inválido, ");
            system("pause");
        }
	} while(a<0);

	do{
        system("cls");
        printf("\t- ÍMPAR OU PAR -\n\n");
        printf("Digite o Início: %i\n",a);
        printf("Digite o Fim: ");
        scanf("%i",&b);

        if(b<a){
            printf("\nNúmero Inválido, ");
            system("pause");
        }
	} while(b<a);

    printf("\nNúmeros Pares:\n");

    for(int i=a;i<=b;i++){
        if(i%2==0) printf("%i ",i);
        if(i==b) printf("\n\n");
    }

    return 0;
}
