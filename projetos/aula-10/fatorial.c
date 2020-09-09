#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int n;
	float e=0;
    do{
        system("cls");
        printf("\t- FATORIAL -\n\n");
        printf("Digite o Limite: ");
        scanf("%i",&n);

        if(n<=0){
            printf("Número Inválido!\n\n");
            system("pause");
        }
    } while(n<=0);

    for(int i=1;i<=n;i++){
        float f=1;
        for(int j=1;j<=i;j++){
            f*=j;
        }
        e+=1/f;
    }

    printf("Resultado: %.2f\n\n",e);

    return 0;
}
