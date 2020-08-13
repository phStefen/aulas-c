#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");

    float n1,n2;
    printf("Digite o 1º Número: ");
    scanf("%f",&n1);   
    printf("Digite o 2º Número: ");
    scanf("%f",&n2);

    if(n1>n2) printf("\n%.1f > %.1f",n1,n2);
    else if (n2>n1) printf("\n%.1f > %.1f",n2,n1); 
    else  printf("\n%.1f = %.1f",n1,n2);
    
    return 0;
}