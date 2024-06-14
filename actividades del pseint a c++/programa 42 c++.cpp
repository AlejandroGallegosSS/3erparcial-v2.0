#include <iostream>
using namespace std ;

int main() {
    int n;
 cout << "Digite el numero de paises: ";
    cin >> n;

    char paises[n][50];

    for (int i = 0; i < n; ++i) {
        cout << "Digite el pais " << i + 1 << ": ";
        cin >> paises[i];
    }

    int pos;
    cout << "Digite la posicion: ";
    cin >> pos;
    cout << "El país en la posicion " << pos << " es: " << paises[pos] <<endl;
    }
