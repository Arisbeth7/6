#include <iostream>
#include <cstring>

#include "director.h"
#include "pelicula.h"

using namespace std;

pelicula registrar (){
    char titulo[100];
    int anio;
    char genero [100];
    char productora [100];
    int minutos;
    char nombre[100];
    char apellido[100];
    char nacionalidad [100];
    int pelic =0;

    cout << "---- Registro ----"<< endl;
    cout << "Ingrese el titulo de la pelicula: "<<endl;
    cin >> titulo;
    cout << "Ingrese el annio de la pelicula: "<<endl;
    cin >> anio;
    cout << "Ingrese el genero de la pelicula: "<<endl;
    cin >> genero;
    cout << "Ingrese la productora de la pelicula: "<<endl;
    cin >> productora;
    cout <<"Ingrese los minutos:"<< endl;
    cin >> minutos;
    cout <<endl;
    cout << "---- Director ----"<< endl;
    cout << "Ingrese el nombre:"<< endl;
    cin >> nombre;
    cout << "Ingrese los apellidos"<<endl;
    cin >> apellido;
    cout << "Nacionalidad "<< endl;
    cin >> nacionalidad;
    cout << "PELICULA REGISTRADA CON EXITO" <<endl;
    cout<< "num de pelicula: " << pelic << endl;

    director autor=director(nombre,apellido,nacionalidad);
    pelicula nuevo=pelicula(titulo,autor, anio,genero,productora,minutos);
    return nuevo;

}
void menu(){
    cout << "========= MENU ================"<<endl;
    cout << "      1.- Registrar"<<endl;
    cout << "      2.- Editar "<<endl;
    cout << "      3.- pelicula Eliminar"<<endl;
    cout << "      4.- Consultar director " << endl;
    cout << "      5.- Informacion" << endl;
    cout << "==============================="<<endl;
    cout <<"Ingresa la opcion deseada"<< endl;
}

int main(){
    pelicula peli[10];
    bool power =true;
    int opc=0,num=0,pelic=0;

    while(power){
        menu();
        cin >>opc;

        switch(opc){
            case 1:
                peli[pelic]=registrar();
                pelic++;
                break;

            case 2:
                cout << "Ingrese el numero de la pelicula: " << endl;
                cin >> num;

                peli[num].toString();
                peli[num]=registrar();
                break;
            case 3:
                cout << "Ingrese el numero de la pelicula: " << endl;
                cin >> num;

                peli[num].toString();
                peli[num]=pelicula();
                cout <<"Pelicula eliminada" << endl;

            case 4:
                cout << "Ingrese el numero de la pelicula: " << endl;
                cin >> num;

                peli[num].getAutor();

            case 5:
                cout << "Ingrese el numero de la pelicula: " << endl;
                cin >> num;

                peli[num].toString();
        }

    }

    return 0;
}
