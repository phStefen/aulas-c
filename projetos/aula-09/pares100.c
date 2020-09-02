#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- TODOS OS PARES ATÉ O 100 -\n\n");
	for(int i=0;i<=100;i++){
        if(i%2==0){
            printf("%i ",i);
            if(i%5==0 && i!=0) printf("\n");
        }
	}

    return 0;
}
