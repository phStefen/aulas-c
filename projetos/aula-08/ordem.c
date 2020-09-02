#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");


	int n[3];

	printf("\t- ORDEM DECRESCENTE -\n\n");

    for(int i=0;i<3;i++){
        printf("Digite o %iº Número: ",(i+1));
        scanf("%i", &n[i]);
    }

    printf("\n");

    for(int i=0;i<3;i++){
        int aux=0;

        for (int j = i; j < 3; j++)
        {
            if(n[i] < n[j]){
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }

        printf("%i",n[i]);

        if(i<2) printf(" > ");
    }

    return 0;
}
