/*La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura
m�nima en una zona y tiempo determinado. Dada la temperatura m�xima y la
temperatura m�nima de San Fernando de ayer, calcular y mostrar la amplitud t�rmica.
NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al de la
temperatura m�nima.*/

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
