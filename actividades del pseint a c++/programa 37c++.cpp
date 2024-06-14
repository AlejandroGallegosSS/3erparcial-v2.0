#include <iostream>
using namespace std;
int main() 
{
	int t, num;
	int acum=0;  
	int acum2=0;
	cout<<"Digite el tamaño del vector 1"<<endl;
	cin>>t;
	int vector1[t];
	
	for (int i=0; i<t; i++) {
			cout<< "Digite un numero: " << endl;
			cin>> num;
			vector1[i]=num;
			acum=acum+vector1[i];
		}
	cout<<"Digite el tamaño del vector 2"<<endl;
	cin>>t;
	int vector2[t];
	for (int i=0; i<t; i++) {
			cout<< "Digite un numero: " << endl;
			cin>> num;
			vector2[i]=num;
			acum2=acum2+vector2[i];
		}
	int vector3[2];
	vector3[1]=acum+acum2;
	cout<<"Resultado total "<<vector3[1]<<endl;
	return 0;
}
