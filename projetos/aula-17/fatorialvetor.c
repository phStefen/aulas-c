#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fatorial(int);
int main()
{
    int v1[10], v2[10];
	setlocale(LC_ALL,"portuguese");
	printf("\t- FATORIAL DE VETOR -\n\n");

    for(int i=0;i<10;i++)
        scanf("%i", &v1[i]);

    printf("\nA: ");
    for(int i=0;i<10;i++)
        printf("%i ", v1[i]);

    printf("\nB: ");
    for(int i=0;i<10;i++){
        v2[i]=fatorial(v1[i]);
        printf("%i ",v2[i]);
    }

    return 0;
}

int fatorial(int i){
    if (i == 1)
        return 1;
    return (i * fatorial(i-1));
}
