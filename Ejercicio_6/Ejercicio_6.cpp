/*Hacer un programa para que un comercio ingrese por teclado la recaudación en
pesos para cada una de las cuatros semanas del mes. El programa debe listar
la recaudación promedio por semana y el porcentaje de recaudación por
semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como
recaudación promedio $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.*/

#include<iostream>
using namespace std;

int main(){

    float totalRecaudado, promedio, semana_1, semana_2, semana_3, semana_4, porc_semana1, porc_semana2, porc_semana3, porc_semana4;

    cout << "Ingrese recaudacion de semana 1: $";
    cin >> semana_1;
    cout << "Ingrese recaudacion de semana 2: $";
    cin >> semana_2;
    cout << "Ingrese recaudacion de semana 3: $";
    cin >> semana_3;
    cout << "Ingrese recaudacion de semana 4: $";
    cin >> semana_4;

    totalRecaudado = (semana_1+semana_2+semana_3+semana_4);
    promedio = (semana_1+semana_2+semana_3+semana_4) / 4;

    porc_semana1 = (semana_1 / totalRecaudado) * 100;
    porc_semana2 = (semana_2 / totalRecaudado) * 100;
    porc_semana3 = (semana_3 / totalRecaudado) * 100;
    porc_semana4 = (semana_4 / totalRecaudado) * 100;

    cout << "\nEl promedio de venta es de: $" << promedio << endl;

    cout << "Porcentaje de venta de la semana 1: " << porc_semana1 << "%" << endl;
    cout << "Porcentaja de venta de la semana 2: " << porc_semana2 << "%" << endl;
    cout << "Porcentaja de venta de la semana 3: " << porc_semana3 << "%" << endl;
    cout << "Porcentaja de venta de la semana 4: " << porc_semana4 << "%" << endl;


    return 0;
}
