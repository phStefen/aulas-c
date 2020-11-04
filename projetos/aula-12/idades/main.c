#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	char nome[50];
	char menor[50];
	char maior[50];
	float media, idma=0,idme;

	printf("\t- IDADES DAS PESSOAS -\n\n");
	for(int i=1;i<=10;i++){
        float idade;
        printf("\nDigite o %iº Nome: ",i);
        scanf("%s",nome);

        printf("Digite a Idade: ");
        scanf("%f",&idade);

        if(i==1) idme=idade;
        if(idade>idma){
            idma=idade;
            for(int j=0;j<50;j++){
                maior[j] = nome[j];
            }
        }
        if(idade<idme){
            idme=idade;
            for(int j=0;j<50;j++){
                menor[j] = nome[j];
            }
        }

        media+=idade;
	}

	printf("\n\nNome da Pessoa mais Nova: %s",menor);
	printf("\nNome da Pessoa mais Velha: %s",maior);
	printf("\nMédia das Idades: %.2f\n\n",media/10);
    return 0;
}
