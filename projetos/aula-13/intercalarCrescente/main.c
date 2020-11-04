#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

    int v1[5],v2[5],v3[10];
	printf("\t- INTERCALAÇÃO -");

	for(int i=0;i<2;i++){
        printf("\n\n%iº Vetor\n",i+1);
        for(int j=0;j<5;j++){
            printf("Insira o %iº Valor: ",j+1);
            if(i==0){
                scanf("%i",&v1[j]);
            }
            else{
                scanf("%i",&v2[j]);
            }
        }
	}

	system("cls");
	printf("\t- INTERCALAÇÃO -\n\n");

    int x=0;
    for(int i=0;i<10;i++){
        if(i%2==0) v3[i] = v1[x];
        else{
            v3[i] = v2[x];
            x++;
        }
    }

    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++){
            int aux;
            if(v3[j]>v3[i]){
                aux = v3[i];
                v3[i] = v3[j];
                v3[j] = aux;
            }
        }

    for(int i=0;i<10;i++)
        printf("%i ",v3[i]);


    return 0;
}
