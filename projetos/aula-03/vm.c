#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    
    float d,h;

    printf("Digite a Distância (km): ");
    scanf("%f",&d);

    printf("Digite o Tempo (h): ");
    scanf("%f",&h);

    printf("Sua velocidade Média foi: %.1fkm/h",d/h);
    printf(" (%.1fm/s)",(d/h)/3.6);
    
    return 0;
}