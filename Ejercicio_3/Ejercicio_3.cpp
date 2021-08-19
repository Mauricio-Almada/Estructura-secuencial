/*Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000
más $ 2.000 de premio por cada auto vendido. Hacer un programa que permita
ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
pagar es de $ 23.000.*/

#include <iostream>
using namespace std;

int main(){

    const int SUELDO_FIJO = 15000, PREMIO = 2000;
    int autos_vendidos, sueldo_total;

    cout << "Ingresar cantidad de autos vendidos: ";
    cin >> autos_vendidos;

    sueldo_total = (autos_vendidos*PREMIO) + SUELDO_FIJO;

    cout << "El sueldo total a pagar es de: " << sueldo_total;





    return 0;
}
