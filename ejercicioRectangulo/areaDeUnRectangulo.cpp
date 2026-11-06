/*wilson jared figueroa jimenez
20191032315*/
#include <iostream>
using namespace std;
// Función para calcular el área de un rectángulo
void calcularAreaRectangulo(int base, int altura)
{
    cout << "El area del rectangulo es: " << base * altura << endl;
}
// Función principal
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