#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	printf("\t- A + B || A * B -\n\n");

	float a,b,c;
	printf("Digite o Valor de A: ");
	scanf("%f",&a);
	printf("Digite o Valor de B: ");
	scanf("%f",&b);

	if(a==b) c=a+b;
	else c=a*b;

	system("cls");
	printf("\t- A + B || A * B -\n\n");
	printf("Resultado: %.2f\n\n",c);

    return 0;
}
