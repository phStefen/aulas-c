#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- EMPRESAS -\n\n");
	float s = 1000, b = 0.015;
	s+=s*b;

	printf("1996- R$: %.2f\t\tBônus de %.1f%%\n",s,b*100);

	for(int i=1997;i<=2020;i++){
        b*=2;
        if(b>=1)b=1;
        s+=s*b;
        printf("%i- R$: %.2f\t\tBônus de %.0f%%\n",i,s,b*100);
	}

    return 0;
}
