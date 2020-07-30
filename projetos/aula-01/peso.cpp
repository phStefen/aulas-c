#include <iostream>

using namespace std;
int main()
{
    system("cls");

    double n1,n2,n3,p1,p2,p3;
    cout << "Digite 3 Notas: "; cin >> n1; cin >> n2; cin >> n3;
    cout << "Digite os 3 Respectivos Pesos: "; cin >> p1; cin >> p2; cin >> p3;

    double media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);

    cout << "A Media foi: " << media;
    return 0;
}