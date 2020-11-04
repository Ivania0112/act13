#include <iostream>
#include "Arreglo.h"
using namespace std;

int main()
{
    Arreglo<string> arreglo; 
    arreglo.insertar_inicio("BUENAS");
    arreglo.insertar_final("NOCHES");
    arreglo.insertar_final("A");
    arreglo.insertar_final("TODOS");
    for (size_t i=0; i<arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
    arreglo.insertar("DIAS",2);
        for (size_t i=0; i<arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
        for (size_t i=0; i<arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
   cout << endl;
    cout << endl;
    return 0;
}
