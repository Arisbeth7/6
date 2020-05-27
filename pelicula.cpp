#include <iostream>
#include "pelicula.h"
#include <cstring>
#include "director.h"

using namespace std;

pelicula::pelicula(){

}

pelicula::pelicula(char titulo[100], director autor, int anio, char genero[100], char productora[100], int minutos){
    strcpy(this->titulo,titulo);
    this->autor = autor;
    this->anio = anio;
    strcpy(this->genero,genero);
    strcpy(this->productora,productora);
    this->minutos = minutos;
}
void pelicula::update(char titulo[100], director autor, int anio, char genero[100], char productora[100], int minutos) {
    strcpy(this->titulo,titulo);
    this->autor = autor;
    this->anio = anio;
    strcpy(this->genero,genero);
    strcpy(this->productora,productora);
    this->anio = anio;
}
void pelicula::getAutor() {
    this->autor.toString();
}

void pelicula::toString() {
    cout << "--- Informacion del libro ---"<<endl;
    cout << "Titulo: "<< this->titulo<<endl;
    cout << "Anio: "<< this->anio<<endl;
    cout << "Genero: "<< this->genero<<endl;
    cout << "productora: "<< this->productora<<endl;
    cout << "Minutos: "<< this->minutos<<endl;
}



