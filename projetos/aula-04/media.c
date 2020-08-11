#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    float nota, media=0;

    for(int i=1;i<=4;i++){
        printf("Digite a %iº Nota: ",i);
        scanf("%f",&nota);
        media+=nota;
    }

    media/=4;

    printf("\nNota: %.2f \nSituação: ",media);
    if(media>7) printf("Aprovado!\n");
    else printf("Reprovado!\n");

    return 0;
}