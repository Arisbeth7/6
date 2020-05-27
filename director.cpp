#include <iostream>
#include "director.h"
#include <cstring>
#include "pelicula.h"

using namespace std;


director::director(){

}

director::director(char nombre[100], char apellido[100], char nacionalidad[100]){
    strcpy(this->nombre,nombre);
    strcpy(this->apellido,apellido);
    strcpy(this->nacionalidad,nacionalidad);
}
void director::toString() {

    cout << "---- Informacion director ----"<<endl;
    cout << "Nombre: "<< this->nombre << endl;
    cout << "Apellido: "<< this->apellido << endl;
    cout << "Nacionalidad: "<< this->nacionalidad << endl;
    cout << endl<<endl;
}

