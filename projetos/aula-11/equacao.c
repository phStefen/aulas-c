#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	int j=1;
	float s=0;
	printf("\t- 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50 -\n\n");

	printf("soma =");
	for(int i=1;i<=99;i+=2){
        printf(" %i/%i",i,j);
        if(i!=99) printf(" +");
        s+=i/j;
        j++;
	}

	printf("\n\nsoma = %.2f\n\n",s);

    return 0;
}
