#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- TABUADA DO 0 AO 9 -\n\n");

    for(int i=0;i<=9;i++){
        for(int j=0;j<=10;j++){
            printf("%i x %i = %i\n",i,j,i*j);
        }

        printf("\n");
    }

    return 0;
}
