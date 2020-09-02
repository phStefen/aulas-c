#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
    printf("A + B < C?\n\n");

    float a,b,c;
    printf("Digite o A: ");
    scanf("%f",&a);
    printf("Digite o B: ");
    scanf("%f",&b);
    printf("Digite o C: ");
    scanf("%f",&c);

    system("cls");
    printf("%.2f + %.2f < %.2f?\n",a,b,c);

    a+=b;
    if(a>c) printf("Não\n\n");
    else printf("Sim\n\n");

    return 0;
}
