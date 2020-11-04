#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	printf("\t- INTERCALAÇÃO -");

	int v1[10],v2[10],v3[20];

	for(int i=0;i<2;i++){
        printf("\n\n%iº Vetor\n",i+1);
        for(int j=0;j<10;j++){
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

	printf("[");
	int x=0;
    for(int i=0;i<20;i++){
        if(i%2==0) v3[i] = v1[x];
        else{
            v3[i] = v2[x];
            x++;
        }

        if(i%4==0) printf("\n\t");
        printf("%i",v3[i]);
        if(i<19) printf(", ");
    }
	printf("\n]\n\n");
    return 0;
}
