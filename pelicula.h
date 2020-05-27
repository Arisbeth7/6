#ifndef PELICULA_H
#define PELICULA_H
#include "director.h"


class pelicula
{
    public:
        pelicula();
        pelicula(char[],director,int,char[],char[],int);
        void update(char[],director,int,char[],char[],int);
        void getAutor();
        void toString();


    private:
        char titulo[100];
        director autor;
        int anio;
        char genero [100];
        char productora [100];
        int minutos ;
};

#endif // PELICULA_H
