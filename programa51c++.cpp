#include <iostream>
#include <string.h>
using namespace std ;

int main() {
    char nombreusuario[20];
    char contra[20];
    int intentosrestantes = 3;
    int articulos;
    int i;
    int presio,tot;
    
    while (intentosrestantes > 0) {
       cout<<"Nombre de usuario: ";
       cin>> nombreusuario;
       cout <<"Contraseña: ";
        cin>>contra;
        if (strcmp(nombreusuario, "AlejandroGM") == 0 && strcmp(contra, "2b9") == 0) {
           cout<<"Bienvenido al sistema, "<< nombreusuario;
           }else if (1){
            cout<<"Nombre de usuario o contraseña incorrectos.\n";
            intentosrestantes--; 
            if (intentosrestantes > 0) {
                cout<<" Te quedan "<<intentosrestantes<<" intentos restantes ";
            }
        }
    }
    cout<<"Has superado el número de intentos permitido.\n";
    do{
    	cout<<"Ingrese el numero de productos ";
          cin>>articulos;
		    if (articulos==0){ 
          break;
        }else if(articulos < 0){
        cout<<"deve ser positivo el numero ingresado";
        	continue;
        }
        cout<<"ingrese el precio por unidad \n";
         cin>>presio;
         cout<<"ingrese 0 para mostrar factura \n";
        if(presio<0){
        	cout<<"el precio no puede ser negativo";
        	continue;
		}
		tot+=articulos*presio;
		}while(1);
	cout<<"el total de la factura es "<<tot;
	cout<<"//////////////////////////////////";
	cout<<" fin de las ventas ";
		return 0; 
	}
	
