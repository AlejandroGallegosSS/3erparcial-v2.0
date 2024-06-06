#include <iostream>

using namespace std;

int main() {
int n1, n2, n3;
cout << "Ingresa 3 numeros \n";
cin >> n1>> n2 >> n3;
if (n1 > n2 && n2 >n3) {
cout << "menor al mayor"<< n3 <<" "<< n2 <<" "<< n1;
} else if (n2 >n1 && n1 > n3) {
 cout << "menor al mayor" << n3 <<" "<< n1 <<" "<< n2;
} else if (n3>n1 && n1 > n2) {
cout << "menor al mayor"<< n2 <<" " << n1 << " "<< n3; }
 else if (n1 > n3 && n3 > n2) {
 	cout<< " menor al mayor " << n2 << " " << n3 << " "<< n1;}
 else if (n2 >n3 && n3 >n1) {
cout << "menor al mayor" << n1 << " " << n3 << " " << n2;}
else if (n3 >n2 && n2 > n1) {
	cout<<"menor al mayor"<< n1 << "" ""<< n2 << " "<< n3;}
}
