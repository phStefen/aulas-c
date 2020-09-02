#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- MAIOR & MENOR -\n\n");

	float num[15];
	float maior=0, menor;

    for(int i=0;i<15;i++){
        printf("Digite o %iº Número: ",i+1);
        scanf("%f",&num[i]);

        if(i==0) menor = num[i];
        if(num[i]>maior) maior = num[i];
        if(num[i]<menor) menor = num[i];
    }

    printf("\n\n");

    printf("O Maior Número foi: %.2f\nO Menor Número foi: %.2f\n\n",maior,menor);

    return 0;
}
