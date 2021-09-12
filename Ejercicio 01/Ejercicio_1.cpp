/*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
por un operario y el valor que se le paga por hora trabajada y listar por pantalla
el sueldo que le corresponda.*/

#include <iostream>
using namespace std;

int main(){

    int valor_hora, hora_trabajada, sueldo;

    cout << "Ingresar el valor por hora: $";
    cin >> valor_hora;
    cout << "Ingresar horas trabajadas: ";
    cin >> hora_trabajada;

    sueldo = valor_hora * hora_trabajada ;

    cout << "El sueldo del operario es de: " << "$" << sueldo;









    return 0;
}
