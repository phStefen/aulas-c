#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	printf("\t- VETORES -\n\n");
	int a[10];
	int b[10];
	int c[10];
	int d[50];


	for(int i=0;i<50;i++)
        d[i]=0;

	for(int i=1;i<=10;i++)
        a[i-1]=i;

    int j=0;
	for(int i=0;i<10;i++){
        b[i]=a[i]*2;
        c[i]=a[i]*b[i];
        if(a[i]%2==0){
            d[j] = a[i];
            j++;
        }
	}


	printf("Vetor A:\n");
	for(int i=0;i<10;i++)
        printf("%i ",a[i]);

	printf("\n\nVetor B:\n");
	for(int i=0;i<10;i++)
        printf("%i ",b[i]);

	printf("\n\nVetor C:\n");
	for(int i=0;i<10;i++)
        printf("%i ",c[i]);

	printf("\n\nVetor D:\n");
	for(int i=0;i<50;i++)
        printf("%i ",d[i]);


    return 0;
}
