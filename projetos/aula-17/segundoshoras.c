#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void converter(int);
int main()
{
	setlocale(LC_ALL,"portuguese");
    int s;
	printf("\t- SEGUNDOS EM HORAS -\n\n");
	scanf("%i",&s);

	converter(s);

    return 0;
}

void converter(int s){
    int h = s/3600;
    int r = s%3600;
    int m = r/60;
    s = r%60;

    printf("%ih %imin %is",h,m,s);
}
