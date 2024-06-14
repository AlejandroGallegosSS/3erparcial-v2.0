#include <iostream>
using namespace std;

int main()  
{
	int t, num, acum = 0;
	cout<< "Digite el tamano del vector (Arreglo)" << endl;
	cin>> t;
	
	int vector [t]; 
	
		for (int i=0; i<t; i++) {	
			cout<< "Digite un numero: " << endl;
			cin>> num;
			vector [i] = num;
			acum = acum+vector [i];
		}
	
		for (int i=0; i<1; i++) {
			
			cout<< "La suma de: " << vector [i] << endl;
		}
	cout<< "Es: " << acum << endl;
}
