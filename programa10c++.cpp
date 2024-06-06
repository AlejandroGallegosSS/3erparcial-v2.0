#include <iostream>
using namespace std;

int main() {
    int nume;
    int cont = 0;
    int tota = 0;
    do {
        cout << "Ingresa un numero: ";
        cin >> nume;
        if (nume != 0) {
            cont++;
            tota+= nume;
            cout << "El numero es: " << nume << "\n";
        }
    } while(nume != 0);
    cout << "Cantidad de numeros ingresados: " << cont;
    cout << "Suma total: " << tota;

    return 0;
}
