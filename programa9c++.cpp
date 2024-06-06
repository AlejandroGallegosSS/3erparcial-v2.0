#include <iostream>
using namespace std;

int main() {
    int pvz;
    cout << "Ingrese la cantidad de terminos que necesita ";
    cin >> pvz;
    for (int i = 5; i <= pvz * 5; i += 5) {
        cout << i << endl;
    }
    return 0;
}
