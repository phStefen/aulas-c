#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    
    int num;

    printf("Digite um Número:");
    scanf("%i",&num);

    if(num%2==0) printf("O Número %i é Par",num);
    else printf("O Número %i é Ímpar",num);

    return 0;
}