#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int i, x;
    float media;
	printf("\t- MÉDIA NO INTERVALOS -\n\n");
	do{
        printf("Digite um Valor: ");
        scanf("%i",&x);
        if(x>=13 && x<=73){
            media+=x;
            i++;
        }
	}while(x>=0);

	printf("\nMédia: %.2f\n\n",media/i);
    return 0;
}
