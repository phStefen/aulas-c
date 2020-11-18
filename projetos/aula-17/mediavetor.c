#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float calcular(int);
int main()
{
	setlocale(LC_ALL,"portuguese");

    int n;
	printf("\t- M�DIA DO VETOR -\n\n");

    printf(" Insira o Tamanho do Vetor: ");
    scanf("%i",&n);
    float media = calcular(n);
    printf("\nA M�dia do Vetor � %.2f\n\n", media);
    return 0;
}

float calcular(int n){
    system("cls");
	printf("\t- M�DIA DO VETOR (%i Posi��es) -\n\n", n);

    int vet[n];
    float media=0;
    for(int i=0;i<n;i++){
        printf(" Insira o %i� Valor: ",i+1);
        scanf("%i",&vet[i]);
        media+=vet[i];
    }

    return media/n;
}
