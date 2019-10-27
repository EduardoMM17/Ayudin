#include "funciones.h"

char preguntar(char& salir){
    do{
        std::cout <<"Desea salir? Presione 'y' si de salir o 'n' de lo contrario:";
        std::cin >> salir;
    }while(salir != 'y' && salir != 'n');
    return salir;
}
