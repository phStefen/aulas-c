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
	printf("\t- MÉDIA DE VALORES INDERTEMINADOS -\n\n");
	printf("Informe quantos Números você quiser\nDigite um Número Menor ou Igual a 0 para Encerrar\n\n");

    do{
        scanf("%i", &i);
        if(i>0){
            qtd++;
            s+=i;
        }
    } while(i>0);

    printf("\nA média dos Números Informados é: %.2f\n\n", media(s,qtd));
    return 0;
}

float media(float s, int qtd){
    return s/qtd;
}
