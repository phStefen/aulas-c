#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- TODOS OS PARES ENTRE 1508 E 2500 -\n\n");
	for(int i=1508;i<=2500;i++){
        if(i%2==0){
            printf("%i ",i);
            if(i%5==0) printf("\n");
        }
	}

    return 0;
}
