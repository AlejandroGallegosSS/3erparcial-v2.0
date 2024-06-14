#include <iostream>
using namespace std ;

int main() {
	
    int sumf = 0;
    int sunf2 = 0;
    int f;
    cout << "Digite el número de filas: ";
    cin >> f;
    int c;
    cout << "Digite el número de columnas: ";
    cin >> c;
    int A[f][c],B[f][c],C[f][c];
    cout<<"Matriz A:  \n";
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Digite dato para la fila " << i << " columna " << j << ": ";
            cin >> A[i][j];
            sumf += A[i][j];
        }
    }
	cout << "La suma de todos los elementos de la columna es: " << sumf <<endl;
	cout<< "\n ";

    cout<<"Matriz B:  \n";
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Digite dato para la fila " << i << " columna " << j << ": ";
            cin >> B[i][j];
            sunf2 += B[i][j];
        }
    }
	cout << "La suma de todos los elementos de la columna es: " << sumf << endl;
	cout<< "\n ";

   
    cout << "Los datos que hay en la matriz  A son:" <<endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << A[i][j] << " ";
        }
        cout << endl;
    }

	    cout << "Los datos que hay en la matriz B son:" << endl;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}
