#include <iostream>

using namespace std;
int main()
{
    system("cls");

    double n1, n2, n3;
    cout << "Digite 3 Notas: "; cin >> n1; cin >> n2; cin >> n3;

    double media = (n1+n2+n3)/3;

    cout << "\nA Media foi: " << media;
    return 0;
}