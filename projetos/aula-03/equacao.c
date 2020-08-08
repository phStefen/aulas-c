#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    system("cls");
    
    float a,b,c;

    printf("A: ");
    scanf("%f",&a);

    printf("B: ");
    scanf("%f",&b);

    printf("C: ");
    scanf("%f",&c);

    float r = pow(a+b,2);
    float s = pow(b+c,2);
    float d = (r+s)/2;

    printf("\nResultado: %.2f",d);
    
    return 0;
}