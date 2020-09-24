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
        printf("\t- MÉDIA DE N NÚMEROS -\n\n");
        printf("Digite quantos Números serão informados: ");
        scanf("%i",&n);

        if(n<0){
            printf("\nValor Inválido! \n");
            system("pause");
        }
	}while (n<0);

	for(int i=1;i<=n;i++){
        float x;
        do{
            system("cls");
            printf("\t- MÉDIA DE N NÚMEROS -\n\n");
            printf("Digite o %iº Número: ",i);
            scanf("%f",&x);

            if(x<0){
                printf("\nValor Inválido! \n");
                system("pause");
            }
        } while(x<0);
        s+=x;
	}

	system("cls");
    printf("\t- MÉDIA DE %i NÚMEROS -\n\n",n);
    printf("A Média é: %.2f\n\n",s/n);

    return 0;
}
