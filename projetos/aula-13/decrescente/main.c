#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- DECRESCENTE -\n\n");

	int v[10];

	printf("Digite 10 Números:\n");
	for(int i=0;i<10;i++)
        scanf("%i",&v[i]);

    for(int i=0;i<10;i++)
    for(int j=0;j<10;j++){
        int aux;
        if(v[j]>v[i]){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }

    for(int i=0;i<10;i++)
        printf("%i ",v[i]);

    return 0;
}
