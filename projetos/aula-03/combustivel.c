#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    
    float t,v,d,l;

    printf("Digite o Tempo Gasto da Viagem (h): ");
    scanf("%f",&t);

    printf("Digite a Velocidade Média (km/h): ");
    scanf("%f",&v);

    d = t*v;
    l = d/12;

    printf("\nDistância: %.2f m",d);
    printf("\nTempo: %.0f h",t);
    printf("\nVelocidade: %.2f km/h",v);
    printf("\nLitros: %.2f l",l);
    return 0;
}