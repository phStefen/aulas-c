#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float mediaA(float, float, float);
float mediaP(float, float, float);
int main()
{
    char tp;
    float n1, n2, n3;
	setlocale(LC_ALL,"portuguese");
	printf("\t- MÉDIA ARITIMÉTICA OU PONDERADA -\n\n");

	do{
        printf("Informe o Tipo da Média (A ou P): ");
        scanf("%c",&tp);
	} while(tp != 'A' && tp != 'P');

	printf("Digite as 3 Notas na Mesma Linha: ");
	scanf("%f %f %f", &n1,&n2,&n3);

    float media;

    if(tp == 'A')
        media = mediaA(n1,n2,n3);
    else
        media = mediaP(n1,n2,n3);

    printf("\nA média do Aluno foi: %.2f\n\n", media);
    return 0;
}

float mediaA(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

float mediaP(float n1,float n2,float n3){
    return (n1*5+n2*3+n3*2)/10;
}
