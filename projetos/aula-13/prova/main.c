#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int aprovados=0;
	int g[10];
	int r[10];
	printf("\t- CORREÇÃO DE PROVA -\n\n");

	printf("Informe o Gabarito (Números)\n");
	for(int i=0;i<10;i++)
        scanf("%i",&g[i]);

    for(int i=0;i<15;i++){
        int nota=0;
        int num;

        printf("\nInsira o Número do Aluno: ");
        scanf("%i",&num);

        printf("Insira as Respostas do %iº Aluno\n", num);
        for(int j=0;j<10;j++)
            scanf("%i",&r[j]);

        for(int j=0;j<10;j++)
            if(g[j] == r[j]) nota++;

        printf("O %iº Aluno ficou com Nota %i\n\n",num,nota);
        if(nota>6) aprovados++;
    }

    system("cls");

	printf("\t- CORREÇÃO DE PROVA -\n\n");
	printf("%.0f%% dos Alunos foram Aprovados",(float)(aprovados*100)/2);

    return 0;
}
