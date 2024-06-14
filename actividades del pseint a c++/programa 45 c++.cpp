#include <iostream>
using namespace std ;
int main() {
    int acum = 0;
    int acum2 = 0;
    int f;
    cout << "Digite el numero de filas: ";
    cin >> f;
    int c;
    cout << "Digite el numero de columnas: ";
    cin >> c;
    int A[f][c],B[f][c],C[f][c];

    cout<<"Matriz A:  \n";
    for (int i = 1; i < f; ++i) {
    	for (int j = 1 ; j < c ; ++j){
        cout << "Digite dato para la fila " << i << " columna" << j <<endl;
        cin >>  A[i][j];
	acum +=  A[i][j];
    	}
    }
	cout << "La suma de todos los elementos de la columna es: " << acum <<endl;
	cout<< "\n ";

    cout<<"Matriz B:  \n";
    for (int i = 1; i < f; ++i) {
    	for (int j = 1 ; j < c ; ++j){
        cout << "Digite dato para la fila " << i << " columna" << j <<endl;
        cin >>  B[i][j];
	acum2 +=  B[i][j];
    	}
    }
	cout << "La suma de todos los elementos de la columna es: " << acum2 << endl;
	cout<< "\n ";

    cout << "Los datos que hay en la matriz A son:" <<endl; 
    for (int i = 1; i < f; ++i) {
    	for (int j = 1 ; j < c ; ++j){
            cout << A[i][j] << " ";
    	}
	 cout << endl;
    }

    cout << "Los datos que hay en la matriz B son:" << endl; 
    for (int i = 1; i < f; ++i) {
    	for (int j = 1 ; j < c ; ++j){
            cout << B[i][j] << " ";
    	}
	 cout << std::endl;
    }

        cout << "La suma de las matrices es: \n" << endl;
	for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"\n";
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<" ["<<i<<"]["<<j<<"] = "<<C[i][j]<<"\t";
        }
        cout<<"\n";
    }
	
}
