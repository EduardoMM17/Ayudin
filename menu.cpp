#include "funciones.h"

void menu(){
    char salir;
    int opcion;

    do{
        cout << "Menu: \n";
        cout << "1. Leer archivo \n";
        cout << "2. Guardar archivo \n";
        cout << "3. Debe justificar \n";
        cout << "4. Alinear el texto a la izquierda \n";
        cout << "5. Alinear el texto a la derecha \n";
        cout << "Elija una opcion: "; cin >>opcion;
        switch(opcion){
            case 1: leer();preguntar(salir); break;
            case 2: ;preguntar(salir); break;
            case 3: ;preguntar(salir); break;
            case 4: ;preguntar(salir); break;
            case 5: ;preguntar(salir); break;
            default: cout <<"Faltan implementar las demas\n";
        }
    }
    while(salir == 'n');
}