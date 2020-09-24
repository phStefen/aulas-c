#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- MOD 11 -\n\n");
    for(int i=1000;i<=1999;i++){
        if(i%11==5){
            printf("%i ",i);
        }
    }

    printf("\n\n");

    return 0;
}
