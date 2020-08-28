#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

    int opc=0;
    float n1,n2,res;
    while (opc < 1 || opc > 2)
    {
        system("cls");
        printf("\t- MENU -\n\n");
        printf("1. Somar 2 Números\n");
        printf("2. Raiz Quadrada\n");
        printf("Opcão: ");
        scanf("%i",&opc);
    }

    system("cls");

    switch(opc){
    case 1:
        printf("\t- SOMA DE 2 NÚMEROS -\n\n");
        printf("Digite o 1º Número: ");
        scanf("%f",&n1);
        printf("Digite o 2º Número: ");
        scanf("%f",&n2);
        res = n1+n2;
        break;
    case 2:
        printf("\t- RAIZ QUADRADA -\n\n");
        printf("Digite o Número: ");
        scanf("%f",&n1);
        res = sqrt(n1);
        break;
    }

    system("cls");
    printf("\t- RESULTADO -\n\n");
    printf("R: %.2f\n\n\n",res);

    return 0;
}
