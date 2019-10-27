#include "funciones.h"

void leer(){
    string rutaArchivo;
    cout <<"Ingrese la ruta del archivo que desea leer: "; cin >> rutaArchivo;
    char cRutaArchivo [rutaArchivo.size()+1];
    strcpy(cRutaArchivo,rutaArchivo.c_str());
    ifstream file;
    file.open(cRutaArchivo);
    if(file.is_open())
        cout <<"Se esta leyendo el archivo!\n";
    else
        cout <<"No se pudo abrir el archivo!\n";
}