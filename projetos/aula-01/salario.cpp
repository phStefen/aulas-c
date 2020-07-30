#include <iostream>

using namespace std;
int main()
{
    system("cls");

    double s;
    cout << "Digite o Salario: "; cin >> s;
    s+=s*.25;
    cout << "O Salario com 25\% de Aumento foi: " << s;

    return 0;
}