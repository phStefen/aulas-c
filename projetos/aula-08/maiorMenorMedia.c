#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	printf("\t- MAIOR, MENOR E MÉDIA -\n\n");

	float ma=0,me=0,m=0;

	for(int i=1;i<5;i++){
        float x;
        printf("Digite o %iº Valor: ",i);
        scanf("%f",&x);

        if(i==1) me=x;
        if(x>ma) ma=x;
        if(x<me) me=x;
        m+=x;
	}

	system("cls");


	printf("\t- MAIOR, MENOR E MÉDIA -\n\n");
	printf("Maior Número: %.2f\n", ma);
	printf("Menor Número: %.2f\n", me);
	printf("Média: %.2f\n\n", m/4);

    return 0;
}
