#include <iostream>
using namespace std ;
int main() {
	int acum=0;
	int t;
	cout<< "digite el tamaño del vector (arreglo) " << endl;
	cin>> t;
	
	int vector[t];
    for (int i =1; i<=t ; ++i) {
    	int num;
        cout << "digite un numero : " << endl;
        cin>> num;
        vector[i] = num;
        acum += vector[i];
    } 
    
	for (int i =1 ; i<=t ; ++i) {
        cout << "la suma de:  " << vector[i] <<endl;
    	}
    	
    cout<< "es :" << acum << endl;
    	
}
