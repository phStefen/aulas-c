#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordenar(float[5]);
int main()
{
    float v[5];
	setlocale(LC_ALL,"portuguese");
	printf("\t- VETOR POR ORDEM CRESCENTE -\n\n");
    printf("Insira 5 Número Reais: ");
    for(int i=0;i<5;i++)
        scanf("%f",&v[i]);

    printf("\n");
    ordenar(v);
    printf("\n\n");
    return 0;
}

void ordenar(float v[5]){

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(v[j]>v[i]){
                float aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }


    for(int i=0;i<5;i++)
        printf("%.2f ",v[i]);
}
