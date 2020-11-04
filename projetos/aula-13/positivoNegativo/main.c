#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int ip=0, in=0;
	int p[8], n[8];

	printf("\t- POSITIVO OU NEGATIVO -\n\n");
    for(int i=0;i<8;i++){
        int x=0;
        printf("Insira o %iº Valor: ",i+1);
        scanf("%i",&x);

        if(x>=0){
             p[ip] = x;
             ip++;
        }
        else{
            n[in] = x;
            in++;
        }
    }

    system("cls");
	printf("\t- POSITIVO OU NEGATIVO -\n\n");

    if(ip>0){
        printf("Valores Positivos:\n");
        for(int i=0;i<ip;i++){
            printf("%i ",p[i]);
        }
    }

    if(in>0){
        printf("\n\nValores Nagativos:\n");
        for(int i=0;i<in;i++){
            printf("%i ",n[i]);
        }
    }
    return 0;
}
