#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
int main(){
	int num[10];
	
	for (int i = 1; i<10; ++i){
		
		num[i] = rand()%100 + 1;
	}
	
	for (int i = 1; i<10; ++i){
		
		cout<< "los numeros aleatorios son: " << num[i] <<endl;
		
	}
}
