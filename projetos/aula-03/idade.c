#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    
    int d,m,a;

    printf("Digite quantos Dias: ");
    scanf("%i",&d);

    printf("Digite quantos Mêses: ");
    scanf("%i",&m);

    printf("Digite quantos Anos: ");
    scanf("%i",&a);

    a*=365;
    m*=30;
    d+=m+a; 

    printf("Sua Idade em dias é: %i",d);

    return 0;
}