/*Hacer un programa para ingresar por teclado una cantidad de minutos y
mostrar por pantalla a cu�ntos d�as, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrar� por pantalla que
equivalen a 1 d�a, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrar� por pantalla que
equivalen a 0 d�a, 8 horas y 0 minutos.*/

#include <iostream>
using namespace std;

int main(){
    int tiempo, dia, hora, minuto;

    cout << "Ingrese cantidad de minutos: ";
    cin >> tiempo;

    dia = tiempo / 60 / 24;
    hora = tiempo / 60 % 24;
    minuto = tiempo % 60 % 24;

    cout << "Equivale a: " << dia << " dias " << hora << " horas " << " y " << minuto << " minutos ";








    return 0;
}
