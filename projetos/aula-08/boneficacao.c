#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	char nome[100];
	int s,e,a;

    printf("\t- FORMUL�RIO -\n\n");
    printf("Digite o seu Nome: ");
    scanf("%s",nome);
    printf("\nInforme seu Sexo:\n1. Masculino\n2. Feminino\nOp��o: ");
    scanf("%i",&s);
    printf("\nInforme seu Estado Civil:\n1. Casado(a)\n2. Solteiro(a)\nOp��o: ");
    scanf("%i",&e);

    if(s==2 && e==1){
        printf("\nDigite o tempo de Casamento: ");
        scanf("%i", &a);
    }

    system("cls");
    printf("\t- FORMUL�RIO -\n\n");
    printf("Obrigado por Participar %s!",nome);
    if(s==2) printf("\nVoc� tem %i anos de Casada",a);

    return 0;
}
