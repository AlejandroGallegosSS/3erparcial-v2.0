#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Digite el número de posiciones: ";
    cin >> n;

    int num[n];
    for (int i = 0; i < n; ++i) {
        int numero;
        cout << "Digite un número para la posición " << i << ": ";
        cin >> numero;
        num[i] = numero;
    }

    cout << "Los datos en las posiciones son:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "El dato en la posición " << i << " es " << num[i] <<endl;
    }

}
