#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1, p, r;
    cout << "Escriba su numero para elevarlo a su potencia:" << endl;
    cin >> n1;
    cout << "Escriba ahora el numero de potencias que desea:" << endl;
    cin >> p;
    
    r = pow(n1, p);
    
    cout << "El numero " << n1 << " a la " << p << " potencia es: " << r << endl;
    return 0;
}
