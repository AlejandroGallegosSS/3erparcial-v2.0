#include <iostream>
using namespace std;

int main() {
    int n1, p, r = 1;
    cout << "Escriba su numero para elevarlo a su potencia:" << endl;
    cin >> n1;
    cout << "Escriba ahora el numero de potencias que desea:" << endl;
    cin >> p;
    
    for (int i = 0; i < p; i++) {
        r *= n1;
    }
    
    cout << "El numero " << n1 << " a la " << p << " potencia es: " << r << endl;
    return 0;
}
