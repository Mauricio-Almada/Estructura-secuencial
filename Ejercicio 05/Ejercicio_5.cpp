/*Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
programa para ingresar por teclado la cantidad de alfajores vendidos de cada
una de las tres marcas y luego se informe el porcentaje de ventas para cada
una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.*/

#include <iostream>
using namespace std;

int main(){
    float venta_A, venta_B, venta_C, a, b, c;

    cout << "Ventas del alfajor A: ";
    cin >> venta_A;
    cout << "Ventas del alfajor B: ";
    cin >> venta_B;
    cout << "Ventas del alfajor C: ";
    cin >> venta_C;

    a = (venta_A*100) / (venta_A + venta_B + venta_C);
    b = (venta_B*100) / (venta_A + venta_B + venta_C);
    c = (venta_C*100) / (venta_A + venta_B + venta_C);

    cout << "\nPorcentaja de alfajor A: " << a << "%" << endl;
    cout << "Porcentaja de alfajor B: " << b << "%" << endl;
    cout << "Porcentaja de alfajor C: " << c << "%" << endl;





    return 0;
}
