#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- NOTAS DAS PROVAS -\n\n");

	int notas[10][3];
	int qtd1=0,qtd2=0,qtd3=0;

	for(int i=0;i<3;i++){
        printf("%iº Prova\n",i+1);
        for(int j=0;j<10;j++){
            printf("Nota do Aluno Nº %i: ",j+1);
            scanf("%d",&notas[i][j]);
        }
        printf("\n");
	}

	system("cls");
	printf("\t- NOTAS DAS PROVAS -\n\n");
    for(int i=0;i<10;i++){
        int menor = notas[i][0];
        int prova = 0;
        for(int j=0;j<3;j++){
            if(notas[i][j] < menor){
                menor = notas[i][j];
                prova = j;

                if(prova==1) qtd1++;
                if(prova==2) qtd2++;
                if(prova==3) qtd3++;
            }
        }
        printf("Pior Prova do Aluno Nº %i: %iº Prova\n",i+1,prova+1);
    }
    printf("\n\nPiores Notas na 1º Prova: %i\n",qtd1);
    printf("Piores Notas na 2º Prova: %i\n",qtd2);
    printf("Piores Notas na 3º Prova: %i\n\n",qtd3);

    system("pause");

    return 0;
}
