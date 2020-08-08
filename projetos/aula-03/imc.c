#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    
    char nome[50];
    float peso, altura;

    printf("Digite o Nome: ");
    scanf("%s", nome);

    printf("Digite seu Peso: ");
    scanf("%f", &peso);

    printf("Digite sua Altura: ");
    scanf("%f", &altura);

    float imc = peso / (altura*altura);

    printf("Olá %s, seu IMC é: %.2f", nome,imc);
    
    return 0;
}