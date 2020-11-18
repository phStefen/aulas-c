#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int maior(int[5]);
int menor(int[5]);
int main()
{
    int v[5];
	setlocale(LC_ALL,"portuguese");
	printf("\t- MENOR E MENOR DE 5 VALORES -\n\n");

	printf(" Insira 5 Valores na Mesma Linha: ");
	for(int i=0;i<5;i++)
        scanf("%i",&v[i]);

    printf("\n O Menor Valor é: %i", menor(v));
    printf("\n O Maior Valor é: %i\n\n", maior(v));


    return 0;
}

int maior(int vet[5]){
    int maior=0;
    for(int i=0;i<5;i++)
        if(vet[i]>maior)
            maior = vet[i];
    return maior;
}

int menor(int vet[5]){
    int menor=vet[0];
    for(int i=1;i<5;i++)
        if(vet[i]<menor)
            menor = vet[i];
    return menor;
}
