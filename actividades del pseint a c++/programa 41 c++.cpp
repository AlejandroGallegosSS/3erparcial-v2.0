#include <iostream>
using namespace std ;
int main() {
    int cont = 0;
    int p;
    cout << "Digite el n�mero de posiciones (tama�o): ";
    cin >> p;

    int num[p];

    for (int i = 1; i <= p; ++i) {
        int numero;
        cout << "Digite el n�mero " << i << ": ";
        cin >> numero;

        num[i] = numero;

        if (num[i] > 0) {
            cont = cont + 1;
        }
    }
}
