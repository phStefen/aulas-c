#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int maior(int vet[6]);
int main()
{
	setlocale(LC_ALL,"portuguese");

    int vet[6];
	printf("\t- MAIOR ELEMENTO DE UM VETOR (6 POSIÇÕES) -\n\n");

    for(int i=0;i<6;i++){
        printf("Informe o %iº Valor: ",i+1);
        scanf("%i",&vet[i]);
    }

    printf("\n\nO Maior Valor do Vetor é: %i\n\n", maior(vet));

    return 0;
}

int maior(int vet[6]){
    int maior=0;
    for(int i=0;i<6;i++)
        if(vet[i]>maior)
            maior = vet[i];
    return maior;
}
