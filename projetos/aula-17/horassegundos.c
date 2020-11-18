#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int converter(int,int,int);
int main()
{
    int h,m,s;
	setlocale(LC_ALL,"portuguese");
	printf("\t- HORAS PARA SEGUNDOS -\n\n");
    printf("Informe as Horas, os Minutos e os Segundos na mesma Linha respectivamente: ");
    scanf("%i %i %i",&h, &m, &s);

    printf("\n%ih %imin %is em Segundos são %i segundos\n\n",h,m,s, converter(h,m,s));
    return 0;
}


int converter(int h,int m,int s){
    return (h*3600) + (m * 60) + s;
}
