#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");

    int d1,m1,a1,d2,m2,a2,m;

    system("cls");
    printf("\t- MAIOR DATA -\n");
    printf("\t- 1º DATA -\n\n");
    printf("Dia: ");
    scanf("%i",&d1);
    printf("Mês: ");
    scanf("%i",&m1);
    printf("Ano: ");
    scanf("%i",&a1);

    system("cls");
    printf("\t- MAIOR DATA -\n");
    printf("\t- 2º DATA -\n\n");
    printf("Dia: ");
    scanf("%i",&d2);
    printf("Mês: ");
    scanf("%i",&m2);
    printf("Ano: ");
    scanf("%i",&a2);

    if(a1>a2) m=1;
    else if (a2>a1) m=2;
    else{
        if(m1>m2) m=1;
        else if(m2>m1) m=2;
        else{
            if(d1>d2) m=1;
            else if(d2>d1) m=2;
            else m=3;
        }
    }

    system("cls");
    printf("\t- RESULTADO -\n\n");
    switch(m){
    case 1:
        printf("%i/%i/%i é a maior data\n",d1,m1,a1);
        break;
    case 2:
        printf("%i/%i/%i é a maior data\n",d2,m2,a2);
        break;
    }

    return 0;
}
