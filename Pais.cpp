#include "Pais.h"

Pais::Pais(string nombre, int habitantes)
{
    this->nombre = nombre;
    this->habitantes = habitantes;
}

void Pais::imprimir()
{
    cout<<"==Imprimiendo pais=="<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Habitantes: "<<habitantes<<endl;
}
