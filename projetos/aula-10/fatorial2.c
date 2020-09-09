#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int n;
    do{
        system("cls");
        printf("\t- FATORIAL -\n\n");
        printf("Digite quantos Números: ");
        scanf("%i",&n);

        if(n<=0){
            printf("Número Inválido!\n\n");
            system("pause");
        }
    } while(n<=0);

    for(int i=1;i<=n;i++){
        int f,r=1;
        printf("\nDigite o %iº Número: ",i);
        scanf("%i",&f);
        for(int j=2;j<=f;j++){
            r*=j;
        }
        printf("Resultado: %i\n",r);
    }

    return 0;
}
