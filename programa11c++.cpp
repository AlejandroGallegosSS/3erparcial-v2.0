#include <iostream>

using namespace std;

int main() {

int hora;

cout << "Introduzca la hora: ";

cin >> hora;
if (hora>24){
  cout<< " error digito no valido";
else if (hora < 12) {

cout << "Buenos dias";

} else if (hora > 11) {

cout << "Buenas tardes";
}
if (hora > 19) {
cout << "Buenas noches";
}
}
