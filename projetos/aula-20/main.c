#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int pos=0;
int nada=0;
int dias=1;
int mundo[10] = {0,0,0,0,0,0,0,0,0,0};

void cabecalho(){
        system("cls");
        printf("\t- DESAFIO DO URSO E DO PEIXE - (%iº Dia)\n\n", dias);
}

void mundoAtual(){
    printf("\n Mundo Atual:\n | ");
    for(int i=0;i<10;i++){
        switch(mundo[i]){
        case 1:
            if(pos == i)
                printf("URSO");
            else
                printf("Urso");
            break;
        case 2:
            if(pos == i)
                printf("PEIXE");
            else
                printf("Peixe");
            break;
        default:
            if(pos == i)
                printf("NADA");
            else
                printf("Nada");
            break;
        }
        printf(" | ");
    }
}

void ajustar(int opc){
    mundo[pos] = opc;
    pos++;
}

void iniciar(){
    if(isFim() == 1)
        return;
    cabecalho();
    mundoAtual();

    printf("\n");
    switch(mundo[pos]){
    case 1:
        rotinaUrso();
        break;
    case 2:
        rotinaPeixe();
        break;
    default:
        break;
    }

    pos++;
    printf("\n\n\n ");
    system("pause");

    if(pos == 10)
        pos = 0;
    dias++;
    iniciar();
}

void rotinaUrso(){
    if(pos==10) return;

    if(pos > 0){
        if(mundo[pos-1] == 1){
            printf("\n Tentou Reproduzir com o Urso de Traz\n");
            reproduzir();
        }
        else if(mundo[pos-1] == 2){
            printf("\n Comeu o Peixe de Traz\n");
            comer(pos-1, pos);
        }
    }
    if(pos < 9){
        if(mundo[pos+1] == 1){
            printf("\n Tentou Reproduzir com o Urso da Frente\n");
            reproduzir();
        }
        else if(mundo[pos+1] == 2){
            printf("\n Comeu o Peixe da Frente");
            comer(pos+1, pos);
        }
        else
            andar();
    }
}

void rotinaPeixe(){
    if(pos==10) return;

    if(pos > 0){
        if(mundo[pos-1] == 1){
            printf("\n Foi Comido pelo Urso de Traz\n");
            comer(pos, pos-1);
        }
        else if(mundo[pos-1] == 2){
            printf("\n Tentou Reproduzir com o Peixe de Traz\n");
            reproduzir();
        }
    }
    if(pos < 9){
        if(mundo[pos+1] == 1){
            printf("\n Foi Comido pelo Urso da Frente\n");
            comer(pos, pos+1);
        }
        else if(mundo[pos+1] == 2){
            printf("\n Tentou Reproduzir com o Peixe da Frente\n");
            reproduzir();
        }
        else
            andar();
    }
}

void reproduzir(){
    for(int i=0;i<10;i++){
        if(mundo[i] == 0){
            mundo[i] = mundo[pos];
            printf(" Sucesso!\n");
            return;
        }
    }

    printf(" Não tem Espaço no seu Mundo!\n");
}

void comer(int peixe, int urso){
    mundo[peixe] = 1;
    mundo[urso] = 0;
}

void andar(){
    mundo[pos+1] = mundo[pos];
    mundo[pos] = 0;
    printf("\n Migrou para Frente!");
}

int isFim(){
    int peixe=0;
    int urso=0;
    int nada=0;

    for(int i=0;i<10;i++){
        switch(mundo[i]){
        case 1:
            urso++;
            break;
        case 2:
            peixe++;
            break;
        default:
            nada++;
            break;
        }
    }

    if(peixe == 10 || urso == 10 || nada == 10)
        return 1;
    else return 0;
}

int main()
{
    int opc;
	setlocale(LC_ALL,"portuguese");

    do{
        cabecalho();
        mundoAtual();

        printf("\n\n Ajuste seu Mundo!");
        printf("\n 0. Nada");
        printf("\n 1. Urso");
        printf("\n 2. Peixe");
        printf("\n 9. Finalizar");
        printf("\n\n Opção: ");
        scanf("%i",&opc);

        if(opc >= 0 && opc <= 2)
            ajustar(opc);
        else if(opc != 9){
            printf("\n Opção Inválida!\n ");
            system("pause");
        }

	} while(opc != 9 && pos != 10);

    pos = 0;
    iniciar();
    cabecalho();
    mundoAtual();

    printf("\n\n Fim de Jogo! Dias vividos: %i\n\n\n", dias);
    return 0;
}
