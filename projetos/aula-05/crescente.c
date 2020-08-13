#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    
    int n[3];
    int maior=0;

    for(int i=0;i<3;i++){
        printf("Digite o %iº Número: ",(i+1));
        scanf("%i", &n[i]);
    }

    printf("\n");

    for(int i=0;i<3;i++){
        int aux=0;

        for (int j = i; j < 3; j++)
        {
            if(n[i] > n[j]){
                aux = n[j];
                n[j] = n[i];
                n[i] = aux;
            }
        }

        printf("%i",n[i]);

        if(i<2) printf(" < ");
    }

    return 0;
}