/*Hacer un programa para ingresar por teclado la cantidad de asientos
disponibles en un avi�n y la cantidad de pasajes ocupados y luego calcular e
informar el porcentaje de ocupaci�n y el porcentaje de no ocupaci�n del mismo.
Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes, el
porcentaje de ocupaci�n que se informar� ser� de un 40% y el porcentaje de no
ocupaci�n ser� de un 60%.*/
#include <iostream>
using namespace std;

int main(){
    int asientosDisponibles, asientosVendidos, porcOcupados, porcNocupados;

    cout << "Ingresar asientos disponibles: ";
    cin >> asientosDisponibles;
    cout << "Ingresar asientos vendidos: ";
    cin >> asientosVendidos;

    porcOcupados = (asientosVendidos * 100) / asientosDisponibles;
    porcNocupados = 100 - porcOcupados;

    cout << " \nEl porcentaje de asientos ocupados es de: " << porcOcupados << "%" << endl;
    cout << "El procentaje de asientos no ocupaods es de: " << porcNocupados << "%" << endl;





    return 0;
}
