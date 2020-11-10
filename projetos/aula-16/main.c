#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct pessoas{
    char nome[50];
    char email[100];
    char tel[20];
    char cpf[12]
};

int main()
{
	setlocale(LC_ALL,"portuguese");

    struct pessoas p;

	printf("\t- REGISTROS -\n\n");
    printf(" Nome: ");
    scanf("%[^\n]%*c", p.nome);
    printf(" Email: ");
    scanf("%[^\n]%*c", p.email);
    printf(" Telefone: ");
    scanf("%[^\n]%*c", p.tel);
    printf(" CPF: ");
    scanf("%[^\n]%*c", p.cpf);

    printf("\n\n Resultado:");
    printf("\n Nome: %s",p.nome);
    printf("\n Email: %s",p.email);
    printf("\n Telefone: %s",p.tel);
    printf("\n CPF: %s\n\n",p.cpf);
    return 0;
}
