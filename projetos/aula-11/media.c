#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int n;
	float s=0;
	do{
        system("cls");
        printf("\t- M�DIA DE N N�MEROS -\n\n");
        printf("Digite quantos N�meros ser�o informados: ");
        scanf("%i",&n);

        if(n<0){
            printf("\nValor Inv�lido! \n");
            system("pause");
        }
	}while (n<0);

	for(int i=1;i<=n;i++){
        float x;
        do{
            system("cls");
            printf("\t- M�DIA DE N N�MEROS -\n\n");
            printf("Digite o %i� N�mero: ",i);
            scanf("%f",&x);

            if(x<0){
                printf("\nValor Inv�lido! \n");
                system("pause");
            }
        } while(x<0);
        s+=x;
	}

	system("cls");
    printf("\t- M�DIA DE %i N�MEROS -\n\n",n);
    printf("A M�dia �: %.2f\n\n",s/n);

    return 0;
}
