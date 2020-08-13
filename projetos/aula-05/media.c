#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    
    float n1=2,n2=3,n3=5;
    printf("Nota do Trabalho de Laboratório: ");
    scanf("%f",&n1);
    n1*=2;

    printf("Nota da Avaliação Semestral: ");
    scanf("%f",&n2);
    n2*=3;
    
    printf("Nota do Exame Final: ");
    scanf("%f",&n3);
    n3*=5;

    float media = (n1+n2+n3)/10;

    printf("\n(%.1f) Conceito: ", media);
    if(media >= 8)  printf("A");
    else if(media >= 7)  printf("B");
    else if(media >= 6)  printf("C");
    else if(media >= 5)  printf("D");
    else printf("E");

    return 0;
}