#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int a,b;
	do{
        system("cls");
        printf("\t- �MPAR OU PAR -\n\n");
        printf("Digite o In�cio: ");
        scanf("%i",&a);

        if(a<0){
            printf("\nN�mero Inv�lido, ");
            system("pause");
        }
	} while(a<0);

	do{
        system("cls");
        printf("\t- �MPAR OU PAR -\n\n");
        printf("Digite o In�cio: %i\n",a);
        printf("Digite o Fim: ");
        scanf("%i",&b);

        if(b<a){
            printf("\nN�mero Inv�lido, ");
            system("pause");
        }
	} while(b<a);

    printf("\nN�meros Pares:\n");

    for(int i=a;i<=b;i++){
        if(i%2==0) printf("%i ",i);
        if(i==b) printf("\n\n");
    }

    return 0;
}
