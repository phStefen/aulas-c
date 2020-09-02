#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");

    int opc;
    do{
        system("cls");
        printf("\t- MESES -\n\n");
        printf("Digite um Número (1-12): ");
        scanf("%i",&opc);
    } while(opc < 1 || opc > 12);

    switch(opc){
    case 1:
        printf("\nJaneiro\n\n");
        break;
    case 2:
        printf("\nFevereiro\n\n");
        break;
    case 3:
        printf("\nMarço\n\n");
        break;
    case 4:
        printf("\nAbril\n\n");
        break;
    case 5:
        printf("\nMaio\n\n");
        break;
    case 6:
        printf("\nJunho\n\n");
        break;
    case 7:
        printf("\nJulho\n\n");
        break;
    case 8:
        printf("\nAgosto\n\n");
        break;
    case 9:
        printf("\nSetembro\n\n");
        break;
    case 10:
        printf("\nOutubro\n\n");
        break;
    case 11:
        printf("\nNovembro\n\n");
        break;
    case 12:
        printf("\nDezembro\n\n");
        break;
    }

    return 0;
}
