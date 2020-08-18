#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    float n1,n2, media;

    printf("Digite a 1º Nota:");
    scanf("%f",&n1);

    printf("Digite a 2º Nota:");
    scanf("%f",&n2);

    media = (n1+n2)/2;

    if(media < 4) printf("\nReprovado");
    else if(media < 7) printf("\nExame");
    else printf("\nAprovado");

    return 0;
}