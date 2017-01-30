#ifndef PAIS_H
#define PAIS_H

#include <iostream>
using namespace std;

class Pais
{
private:
    string nombre;
    int habitantes;

public:
    Pais(string nombre, int habitantes);

    void imprimir();
};

#endif // PAIS_H
