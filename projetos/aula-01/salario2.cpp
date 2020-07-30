#include <iostream>

using namespace std;
int main()
{
    system("cls");
    
    double s,p;
    cout << "Digite o Salario: R$"; cin >> s;
    cout << "Digite quantos \% o Salario ira Aumentar: "; cin >> p;
    s+=s*(p/100);
    cout << "\nO Salario ficara valendo: R$" << s;

    return 0;
}