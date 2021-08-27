/*La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura
mínima en una zona y tiempo determinado. Dada la temperatura máxima y la
temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.
NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la
temperatura mínima.*/

#include <iostream>
using namespace std;

int main(void){

    int temperaturaMinima, temperaturaMaxima, amplitudTermica;

    cout << "Ingresar la temperatura maxima: ";
    cin >> temperaturaMaxima;
    cout << "Ingresar temperatura minima: ";
    cin >> temperaturaMinima;

    amplitudTermica = temperaturaMaxima - temperaturaMinima;

    cout << "La amplitud termica es de: " << amplitudTermica << endl;




    return 0;
}
