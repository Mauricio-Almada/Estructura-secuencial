/*Hacer un programa para ingresar el importe de una compra y el descuento a aplicar.
Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total
a cobrar.
Ejemplo:
Importe : 4500
Descuento: 40
Importe : $ 4500
Descuento : $ 1800
Total : $ 2700*/

#include <iostream>
using namespace std;

int main(){
    int importe, descuento, totalApagar, descuentoAplicado;

    cout << "Ingrese el importe de una venta: $" ;
    cin >> importe;
    cout << "Ingrese el porcentaje de descuento a aplicar: ";
    cin >> descuento;

    descuentoAplicado = (importe * descuento) / 100;
    totalApagar = importe - descuentoAplicado;

    cout << "\nEl importe de la venta es: " << "$" << importe << endl;
    cout << "El descuento aplicado fue del: " << descuento << "%" << endl;
    cout << "Se descontaran: " << "$" << descuentoAplicado << endl;
    cout << "El total a pagar es de: " << "$" << totalApagar << endl;







    return 0;
}
