#include <iostream>
using namespace std;

int main() {
    int car;
    cout << "Ingresa el numero de la carta: \n";
    cin >> car;

    switch(car){
        case 1:
        cout << "AS";
        break;
        case 10:
        cout << "SOTA";
        break;
        case 11:
        cout << "CABALLO";
        break;
        case 12:
        cout << "REY";
        break;
        
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        cout << "No es ninguna figura ni tampoco AS";
        break;
        default:
    if(car> 12){
        cout << "Este no es numero de una carta de la baraja espa�ola";
    }

}
}
