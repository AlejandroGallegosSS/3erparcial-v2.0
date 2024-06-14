#include <iostream>
using namespace std ;
int main() {
    int cont = 0;
    int p;
    cout << "Digite el número de posiciones (tamaño): ";
    cin >> p;

    int num[p];

    for (int i = 1; i <= p; ++i) {
        int numero;
        cout << "Digite el número " << i << ": ";
        cin >> numero;

        num[i] = numero;

        if (num[i] > 0) {
            cont = cont + 1;
        }
    }
}
