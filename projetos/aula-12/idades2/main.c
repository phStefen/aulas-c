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
	int infinito=0, i=1;;

	printf("\t- IDADES DAS PESSOAS -\n");
	do{
        float idade;

        printf("\nDigite a Idade: ");
        scanf("%f",&idade);

        if(idade==0) break;

        printf("Digite o %iº Nome: ",i);
        scanf("%s",nome);

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
        i++;
	}while(infinito == 0);

	printf("\n\nNome da Pessoa mais Nova: %s",menor);
	printf("\nNome da Pessoa mais Velha: %s",maior);
	printf("\nMédia das Idades: %.2f\n\n",media/i);
    return 0;
}
