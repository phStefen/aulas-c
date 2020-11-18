#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float volume(float);
int main()
{
    float r;
	setlocale(LC_ALL,"portuguese");
	printf("\t- VOLUME DE UMA ESFERE -\n\n");
	printf("Informe o Raio da Esfera: ");
	scanf("%f", &r);

	printf("\nO Volume da Esfera é: %.2f\n\n", volume(r));

    return 0;
}

float volume(float r){
    return (4/3) * (r*r*r);
}
