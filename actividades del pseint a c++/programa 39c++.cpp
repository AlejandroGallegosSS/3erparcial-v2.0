#include <iostream>
using namespace std ;

int main() {
    int acum = 0;
    int acum2 = 0;
    int t;

    cout << "Digite el tama�o del primer vector (arreglo): ";
    cin >> t;

    int vector[t];
    for (int i = 1; i <= t; ++i) {
        int num;
       cout << "Digite un n�mero: ";
        cin >> num;
        vector[i] = num;
        acum += vector[i];
    }

    cout << "La suma de los elementos del primer vector es: " << acum <<endl;

    cout << "Digite el tama�o del segundo vector (arreglo): ";
    cin >> t;

    int vector2[t];
    for (int i = 1; i <= t; ++i) {
        int num;
        cout << "Digite un n�mero: ";
        cin >> num;
        vector2[i] = num;
        acum2 += vector2[i];
    }

    cout << "La suma de los elementos del segundo vector es: " << acum2 <<endl;

    int vector3[2];
    vector3[1] = acum + acum2;

    cout << "El resultado de la suma es: " << vector3[1] << endl;
}
