#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    FILE *file;
    int x;
    int qtd=0;
	setlocale(LC_ALL,"portuguese");
	printf("\t- ORDENAR ARQUIVOS -\n\n");
	file = fopen("numbers.txt", "r+");

	if(file == NULL){
        printf(" Erro na Leitura do Arquivo!\n\n");
        return 1;
	}

	while(fscanf(file, "%d\n", &x) != EOF){
        qtd++;
	}

	fclose(file);
	file = fopen("numbers.txt", "r+");

	int vet[qtd];
	int i=1;
	while(fscanf(file, "%d\n", &x) != EOF){
        vet[i-1] = x;
        i++;
	}

    for(int i=0;i<qtd;i++){
        for(int j=0;j<qtd;j++){
            if(vet[i] < vet[j]){
                int aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }

    fclose(file);

    FILE *result;
    result = fopen("resultado.txt","w+");
    for(int i=0;i<qtd;i++){
        fprintf(result, "%i\n", vet[i]);
    }
    fclose(result);
    printf(" Arquivo Criado! (resultado.txt)\n\n");
}
