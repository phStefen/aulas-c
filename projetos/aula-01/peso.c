#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float n1,n2,n3,p1,p2,p3;
    printf("Digite 3 Notas: \n");
    printf("1�: ");
    scanf("%f",&n1);
    printf("2�: ");
    scanf("%f",&n2);
    printf("3�: ");
    scanf("%f",&n3);

    printf("\nDigite os Pesos das Notas: \n");
    printf("1�: ");
    scanf("%f",&p1);
    printf("2�: ");
    scanf("%f",&p2);
    printf("3�: ");
    scanf("%f",&p3);

    float media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);

    printf("\nA M�dia foi: %.2f",media);

    return 0;
}
