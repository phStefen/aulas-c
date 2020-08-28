#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
    system("cls");

    int x=0,y=0;
    float n[3];
    float m=0;
    float aux=0;
    while (x < 1 || x > 3)
    {
        system("cls");
        printf("\t- MENU -\n\n");
        printf("1. Ordem Crescente\n");
        printf("2. Ordem Decrescente\n");
        printf("3. Maior no Meio\n");
        printf("Opcão: ");
        scanf("%i",&x);
    }

    system("cls");
    printf("\t- INSIRA OS VALORES -\n\n");
    for(int j=0;j<3;j++){
        printf("Insira o %iº Valor: ",(j+1));
        scanf("%f",&n[j]);
    }
    system("cls");

    switch(x){
    case 1:
        printf("\t- ORDEM CRESCENTE -\n\n");
        for(int i=0;i<3;i++){
            for(int j=i;j<3;j++){
                if(n[i]>n[j]){
                    aux = n[j];
                    n[j] = n[i];
                    n[i] = aux;
                }
            }
            printf("%.1f ",n[i]);
        }
        break;
    case 2:
        printf("\t- ORDEM DECRESCENTE -\n\n");
        for(int i=0;i<3;i++){
            for(int j=i;j<3;j++){
                if(n[i]<n[j]){
                    aux = n[i];
                    n[i] = n[j];
                    n[j] = aux;
                }
            }
            printf("%.1f ",n[i]);
        }
        break;
    case 3:
        printf("\t- MAIOR NO MEIO -\n\n");
        for(int i=0;i<3;i++){
            if(n[i]>m){
                y=i;
                m=n[i];
            }
        }

        aux = n[y];
        n[y] = n[1];
        n[1] = aux;

        for(int i=0;i<3;i++){
            printf("%.1f ",n[i]);
        }

        break;
    }

    return 0;
}
