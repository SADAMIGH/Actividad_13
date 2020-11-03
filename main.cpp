#include <iostream>
#include "arreglo.h"
using namespace std;

int main() 
{
    Arreglo<string>arreglo;

    arreglo.insertar_inicio(" string 1 ");
    arreglo.insertar_final(" string 2 ");
    arreglo.insertar_inicio(" string 3 ");
    arreglo.insertar_final(" string 4 ");
    
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    
    arreglo.insertar(" string 5 ", 2);

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    
    system("PAUSE");
    return 0;
}