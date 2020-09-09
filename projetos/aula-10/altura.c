#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
    int n,nmaior,nmenor;
    float h,hmaior=0,hmenor;
	printf("\t- ALTURA DE ALUNOS -\n");
	for(int i=0;i<10;i++){
        printf("\nDigite o Número do Aluno: ");
        scanf("%i",&n);

        printf("Digite a Altura do Aluno: ");
        scanf("%f",&h);

        if(i==0) hmenor=h;

        if(h<=hmenor){
            hmenor=h;
            nmenor=n;
        }
        if(h>=hmaior){
            hmaior=h;
            nmaior=n;
        }
	}

	printf("\n\n- MAIOR ALUNO -\nNúmero: %i\nAltura: %.2f\n\n",nmaior,hmaior);
	printf("- MENOR ALUNO -\nNúmero: %i\nAltura: %.2f\n\n",nmenor,hmenor);

    return 0;
}
