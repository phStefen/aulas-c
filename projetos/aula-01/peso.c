#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float n1,n2,n3,p1,p2,p3;
    printf("Digite 3 Notas: \n");
    printf("1º: ");
    scanf("%f",&n1);
    printf("2º: ");
    scanf("%f",&n2);
    printf("3º: ");
    scanf("%f",&n3);

    printf("\nDigite os Pesos das Notas: \n");
    printf("1º: ");
    scanf("%f",&p1);
    printf("2º: ");
    scanf("%f",&p2);
    printf("3º: ");
    scanf("%f",&p3);

    float media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);

    printf("\nA Média foi: %.2f",media);

    return 0;
}
