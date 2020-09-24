#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	float x, me, ma;

	printf("\t- MAIOR & MENOR -\n\n");
	for(int i=0;i<15;i++){
            printf("Digite o %iº Valor: ",i+1);
            scanf("%f",&x);

            if(i==0){
                me = x;
                ma = x;
            }

            if(x > ma) ma = x;
            if(x < me) me = x;
	}

	printf("\nMaior: %.2f\nMenor: %.2f\n\n",ma,me);

    return 0;
}
