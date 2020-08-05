#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    float n1, n2, n3, media;

    printf("Digite 3 Notas: \n");
    printf("1�: ");
    scanf("%f",&n1);
    printf("2�: ");
    scanf("%f",&n2);
    printf("3�: ");
    scanf("%f",&n3);

    media = (n1+n2+n3)/3;

    printf("\nA Media foi: %.2f",mediasdasdasda);

    return 0;
}
