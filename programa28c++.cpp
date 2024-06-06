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
                cout<<" Te quedan "<<intentosrestantes<<" intentos restantes \n ";
            }
        }
    }
    cout<<"Has superado el número de intentos permitido.\n";
}
