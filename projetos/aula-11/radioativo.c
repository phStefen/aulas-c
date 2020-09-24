#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

	float mi,mf;
	int t=0;
	printf("\t- MATERIAL RADIOATIVO -\n\n");
	printf("Insira a Massa Inicial: ");
	scanf("%f",&mi);

    mf=mi;
	do{
        mf/=2;
        t++;
	}while(mf > 0.5);

	int h=0,m=0,s=0;

	s = t*50;
	if(s>60){
        do{
            s-=60;
            m++;
        } while(s >= 60);
	}

	if(m>60){
        do{
            m-=60;
            h++;
        } while(m >= 60);
	}

	printf("\nMassa Inicial: %.2f",mi);
	printf("\nMassa Final: %.2f",mf);
	printf("\nTempo Necessário: %i:%i:%i\n\n",h,m,s);

    return 0;
}
