#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

    int p;
	int nums[20];

	printf("\t- VETOR DE 20 POSIÇÕES -\n\n");

	for(int i=0;i<20;i++){
        printf("Insira o %dº Número: ", i+1);
        scanf("%d",&nums[i]);
	}

	system("cls");
    printf("\t- VETOR DE 20 POSIÇÕES -\n\n");

	printf("Vetor Original:\n[\n\t");
	for(int i=0;i<20;i++){
        printf("%d ",nums[i]);
        if(i%5==0 && i>0) printf("\n\t");
	}
	printf("\n]");

    for(int i=0;i<20;i++){
        for(int j=i;j<20;j++){
            if(nums[j]<nums[i]){
                int aux = nums[i];
                nums[i] = nums[j];
                nums[j] = aux;
            }
        }
	}

	printf("\n\nVetor Ordenado:\n[\n\t");
	for(int i=0;i<20;i++){
        printf("%d ",nums[i]);
        if(i%5==0 && i>0) printf("\n\t");
	}
	printf("\n]");

	printf("\n\n Digite um Número para Pesquisar no Vetor: ");
    scanf("%d",&p);

    for(int i=0;i<20;i++){
        if(nums[i] == p) printf("\nO Número informado (%d) foi encontrado em %dº Posição.",p,i+1);
	}

	printf("\n\n");
    return 0;
}
