#include <iostream>
using namespace std;

void calcularAreaRectangulo(int base, int altura)
{
    cout << "El area del rectangulo es: " << base * altura << endl;
}

int main()
{
    int base, altura;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese la altura: ";
    cin >> altura;

    calcularAreaRectangulo(base, altura);

    return 0;
}