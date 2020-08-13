#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    
    int n[4] = {0,0,0,0};
    int x=0;

    printf("Digite o 1º Número: ");
    scanf("%i",&n[0]);

    for(int i=1;i<3;i++){
        while(n[i] <= n[i-1]){
            printf("\nDigite o %iº Número: ",(i+1));
            scanf("%i",&n[i]);

            if(n[i] < n[i-1]) printf("Valor Inválido!\n");
        }
    }

    printf("\nDigite o 4º Número: ");
    scanf("%i",&n[3]);

    printf("\nResultado: ");
    for(int i=0;i<4;i++){
        int aux=0;

        for (int j = i; j < 4; j++)
        {
            if(n[i] > n[j]){
                aux = n[j];
                n[j] = n[i];
                n[i] = aux;
            }
        }

        printf("%i",n[i]);

        if(i<3) printf(" < ");
    }

    return 0;
}