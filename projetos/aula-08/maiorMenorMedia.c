#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	printf("\t- MAIOR, MENOR E M�DIA -\n\n");

	float ma=0,me=0,m=0;

	for(int i=1;i<5;i++){
        float x;
        printf("Digite o %i� Valor: ",i);
        scanf("%f",&x);

        if(i==1) me=x;
        if(x>ma) ma=x;
        if(x<me) me=x;
        m+=x;
	}

	system("cls");


	printf("\t- MAIOR, MENOR E M�DIA -\n\n");
	printf("Maior N�mero: %.2f\n", ma);
	printf("Menor N�mero: %.2f\n", me);
	printf("M�dia: %.2f\n\n", m/4);

    return 0;
}
