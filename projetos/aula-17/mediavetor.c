#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float calcular(int);
int main()
{
	setlocale(LC_ALL,"portuguese");

    int n;
	printf("\t- MÉDIA DO VETOR -\n\n");

    printf(" Insira o Tamanho do Vetor: ");
    scanf("%i",&n);
    float media = calcular(n);
    printf("\nA Média do Vetor é %.2f\n\n", media);
    return 0;
}

float calcular(int n){
    system("cls");
	printf("\t- MÉDIA DO VETOR (%i Posições) -\n\n", n);

    int vet[n];
    float media=0;
    for(int i=0;i<n;i++){
        printf(" Insira o %iº Valor: ",i+1);
        scanf("%i",&vet[i]);
        media+=vet[i];
    }

    return media/n;
}
