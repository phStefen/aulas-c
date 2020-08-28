#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
    system("cls");

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Data Atual: %02d/%02d/%d \n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

    return 0;
}
