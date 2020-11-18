#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fatorial(int);
int main()
{
    int n;
	setlocale(LC_ALL,"portuguese");
	printf("\t- S = 1 + 1/(1!) + 1/(2!) + ... + 1/(N!) -\n\n");
    scanf("%i",&n);

    float s=1;
    printf("S = 1 + ");
    for(int i=1;i<=n;i++){
        printf("1/(%i!)", i);
        if(i<n)
            printf(" + ");

        s += 1/fatorial(i);
    }

    printf("\nS = %.2f\n\n",s);
    return 0;
}

int fatorial(int i){
    if (i == 1)
        return 1;
    return (i * fatorial(i-1));
}
