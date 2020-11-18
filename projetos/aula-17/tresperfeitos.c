#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int perfeito(int);
int main()
{
    int vet[3];
	setlocale(LC_ALL,"portuguese");
	printf("\t- OS 3 PRIMEIROS NÚMEROS PERFEITOS -\n\n");

    vet[0] = perfeito(1);
    for(int i=1;i<3;i++)
        vet[i] = perfeito(vet[i-1]+1);

    for(int i=0;i<3;i++)
        printf("%i ", vet[i]);
    return 0;
}

int perfeito(int x){
    int s=0;
    for(int i=1;i<x;i++)
        if(x%i==0)
            s+=i;
    if(s==x)
        return s;
    return perfeito(x+1);
}
