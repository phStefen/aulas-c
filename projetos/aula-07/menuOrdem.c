#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("cls");

    int i=0;
    float n[3];

    while (i < 1 || i > 3)
    {
        system("cls");
        printf("1. Ordem Crescente");
        printf("\n2. Ordem Decrescente");
        printf("\n3. Maior no Meio");
        printf("\nOpção: ");
        scanf("%i",&i);
    }

    scanf("%f",&n[0]);

    a(n[0]);

    return 0;
}

void a(float f){
    printf("%f",f);
}
