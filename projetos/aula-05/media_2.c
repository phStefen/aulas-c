#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");

    float media=0,nota;

    for(int i=1;i<=3;i++){
        printf("\nDigite a %iº Nota: ",i);
        scanf("%f",&nota);
        media+=nota;
    }

    media/=3;

    printf("\nMédia: %.1f\nSituaçção: ",media);
    
    if(media>=7) printf("Aprovado:");
    else if(media<3) printf("Reprovado");
    else{
        printf("Exame");
        float x = 12 - media;
        printf("\nNota Necessária: %.1f",x);
    }
    return 0;
}