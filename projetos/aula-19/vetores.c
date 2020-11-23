#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int adicionar();
void exibir(int[]);
int maior(int[]);
int menor(int[]);
int media(int[]);
void ordenar(int[]);

int main(){
    int opc;
    int vet[10] = {0,0,0,0,0,0,0,0,0,0};
	setlocale(LC_ALL,"portuguese");

	do{
        printf("\t- VETORES -\n\n");
        printf(" |Selecione uma Opção|");
        printf("\n 1. Adicionar um Número Aleatoriamente");
        printf("\n 2. Exibir o Vetor");
        printf("\n 3. Exibir o Maior Número");
        printf("\n 4. Exibir o Menor Número");
        printf("\n 5. Exibir a Média");
        printf("\n 6. Ordenar Crescentemente");
        printf("\n 0. Sair");
        printf("\n\n Opção Selecionada: ");
        scanf("%i", &opc);

        switch(opc){
            case 1:
                for(int i=0;i<10;i++){
                    if(vet[i]==0){
                        vet[i] = adicionar();
                        printf(" Número Adicionado: %i",vet[i]);
                        break;
                    }
                }
                break;
            case 2:
                printf(" Vetor Atual: ");
                exibir(vet);
                break;
            case 3:
                printf(" Maior Valor: %i", maior(vet));
                break;
            case 4:
                printf(" Menor Valor: %i", menor(vet));
                break;
            case 5:
                printf(" Média do Vetor: %i", media(vet));
                break;
            case 6:
                printf(" Vetor Ordenado: ");
                for(int i=0;i<10;i++){
                    for(int j=0;j<10;j++){
                        if(vet[i] < vet[j]){
                            int aux = vet[j];
                            vet[j] = vet[i];
                            vet[i] = aux;
                        }
                    }
                }
                exibir(vet);
                break;
        }
        printf("\n\n");
        system("pause");
        system("cls");
	}while(opc != 0);


    return 0;
}

int adicionar(){
    return (rand() %100) + 1;
}

void exibir(int vet[]){
    for(int i=0;i<10;i++){
        printf("%i ", vet[i]);
    }
}

int maior(int vet[]){
    int maior = 0;
    for(int i=0;i<10;i++)
        if(vet[i] > maior)
            maior = vet[i];

    return maior;
}

int menor(int vet[]){
    int menor = 101;
    for(int i=0;i<10;i++)
        if(vet[i] < menor)
            menor = vet[i];

    return menor;
}

int media(int vet[]){
    int media = 0;
    for(int i=0;i<10;i++)
        media+=vet[i];

    return media/10;
}
