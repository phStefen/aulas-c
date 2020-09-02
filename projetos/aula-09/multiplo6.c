#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- TODOS OS PARES ENTRE 2500 e 10000 -\n\n");
	for(int i=2500;i<=10000;i++){
        if(i%6==0){
            printf("%i ",i);
            if(i%5==0) printf("\n");
        }
	}

    return 0;
}
