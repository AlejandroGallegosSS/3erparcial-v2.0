#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Digite el n�mero de posiciones: ";
    cin >> n;

    int num[n];
    for (int i = 0; i < n; ++i) {
        int numero;
        cout << "Digite un n�mero para la posici�n " << i << ": ";
        cin >> numero;
        num[i] = numero;
    }

    cout << "Los datos en las posiciones son:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "El dato en la posici�n " << i << " es " << num[i] <<endl;
    }

}
