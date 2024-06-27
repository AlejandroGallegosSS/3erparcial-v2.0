#include <conio.h>
#include <windows.h>
#include <iostream>
using namespace std;

#define COLOR_pvz 14
#define COLOR_pvz2 13
#define COLOR_pvz3 15
#define COLOR_pvz4 11
#define COLOR_pvzrework 10

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void limpiarPantalla() {
    system("cls");
}

int main() {
    int h, b, b2, a;
    int opcion = 0;
    bool salir = false;
    const int OPC = 4;

    do {
        limpiarPantalla();

        setColor(COLOR_pvz2);
        cout << "elija la figura de la cual necesita el area\n";

        setColor(opcion == 0 ? COLOR_pvzrework: COLOR_pvz3);
        cout << (opcion == 0 ? "* " : "   ") << "Triangulo\n";
        setColor(opcion == 1 ? COLOR_pvz2 : COLOR_pvz3);
        cout << (opcion == 1 ? "* " : "   ") << "Trapecio\n";
        setColor(opcion == 2 ? COLOR_pvz : COLOR_pvz3);
        cout << (opcion == 2 ? "* " : "   ") << "Rectangulo\n";
        setColor(opcion == 3 ? COLOR_pvz4 : COLOR_pvz3);
        cout << (opcion == 3 ? "* " : "   ") << "fin del programa\n";
        setColor(COLOR_pvz3);

        switch (_getch()) {
            case 72:
                opcion = (opcion - 1 + OPC) % OPC;
                break;
            case 80:
                opcion = (opcion + 1) % OPC;
                break;
            case 13: 
                switch (opcion) {
                    case 0: 
                        limpiarPantalla();
                        setColor(COLOR_pvz);
                        cout << "Introduce la base y altura respectivamente: \n";
                        setColor(COLOR_pvz3);
                        cin >> b >> h;
                        a = (b * h) / 2;
                        cout << "El area del triangulo es: " << a << endl;
                        setColor(COLOR_pvz3);
                        cout << "\nPresiona cualquier tecla para continuar..." << endl;
                        _getch();
                        break;
                    case 1:  
                        limpiarPantalla();
                        setColor(COLOR_pvz);
                        cout << "Introduzca las dos bases y la altura respectivamente: \n";
                        setColor(COLOR_pvz3);
                        cin >> b >> b2 >> h;
                        a = ((b + b2) * h) / 2;
                        cout << "El area del trapecio es: " << a << endl;
                        setColor(COLOR_pvz3);
                        cout << "\nPresiona cualquier tecla para continuar..." << endl;
                        _getch();
                        break;
                    case 2: 
                        limpiarPantalla();
                        setColor(COLOR_pvz);
                        cout << "Introduzca base y altura respectivamente: \n";
                        setColor(COLOR_pvz3);
                        cin >> b >> h;
                        a = b * h;
                        cout << "El area del rectangulo es: " << a << endl;
                        setColor(COLOR_pvz3);
                        cout << "\nPresiona cualquier tecla para continuar..." << endl;
                        _getch();
                        break;
                    case 3: 
                        salir = true;
                        break;
                }
                break;
            default:
                break;
        }
    } while (!salir);

    return 0;
}
