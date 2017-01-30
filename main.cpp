#include <iostream>
#include "Pais.h"

using namespace std;

int main()
{
    string nombre;
    int habitantes;
    cout<<"Ingrese el nombre: ";
    cin>>nombre;
    cout<<"Ingrese los habitantes: ";
    cin>>habitantes;

    Pais *pais = new Pais(nombre,habitantes);
    pais->imprimir();

    return 0;
}





