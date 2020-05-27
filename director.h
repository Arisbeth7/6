#ifndef DIRECTOR_H
#define DIRECTOR_H


class director
{
    public:
        director();
        director(char[],char[],char[]);
        void toString();


    private:
        char nombre[100];
        char apellido[100];
        char nacionalidad [100];
};

#endif // DIRECTOR_H
