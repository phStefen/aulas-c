#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float media(float,int);
int main()
{
    int i;
    int qtd=0;
    float s;
	setlocale(LC_ALL,"portuguese");
	printf("\t- M�DIA DE VALORES INDERTEMINADOS -\n\n");
	printf("Informe quantos N�meros voc� quiser\nDigite um N�mero Menor ou Igual a 0 para Encerrar\n\n");

    do{
        scanf("%i", &i);
        if(i>0){
            qtd++;
            s+=i;
        }
    } while(i>0);

    printf("\nA m�dia dos N�meros Informados �: %.2f\n\n", media(s,qtd));
    return 0;
}

float media(float s, int qtd){
    return s/qtd;
}
