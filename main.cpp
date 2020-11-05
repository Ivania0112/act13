#include <iostream>
#include "Arreglo.h"
#include "Computadora.h"
using namespace std;

int main()
{
    Arreglo<Computadora> Computadoras;

    Computadora p01("Pastrie", "Windous", 1000, 8);
    Computadora p02("Mikelson", "Linux", 4000,64);
    Computadora p03("Clets", "MacOS", 2000, 16);
    Computadora p04("Pats", "Windous", 3000, 32);

    Computadoras << p01 << p02 << p03 << p04 << p03;
    Computadora p05("Clets", "redhat", 5000, 4);
    Computadora p06("Clets1", "redhat", 5000, 4);    
    
    Computadora *ptr1 = Computadoras.buscar(p01);
    if (ptr1 != nullptr){
        cout << *ptr1 << endl;
    }
    else 
    {
        cout << "No existe"<< endl;
    }

    Computadora *ptr = Computadoras.buscar(p06);
    if (ptr != nullptr){
        cout << *ptr << endl;
    }
    else 
    {
        cout << "No existe"<< endl;
    }

    Arreglo<Computadora*> ptrs = Computadoras.buscar_todos(p05);

    if (ptrs.size() > 0) {
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *p = ptrs[i];
            cout << *p << endl;
        }
    }
    else {
        cout << "No existen coincidencias" << endl;
    }
    /*Arreglo<string> arreglo; 
    for (size_t i = 0; i < 10; i++) {
        arreglo.insertar_final(i);
    }

    cout << endl;
    arreglo.insertar("DIAS",2);
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    for (size_t i=0; i<arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }   
    cout << endl;
    string *v= arreglo.buscar("A");
    cout << v << " " << *v<< endl;
    *v = 20;
    for (size_t i=0; i<arreglo.size(); i++){
        cout << arreglo[i] << " ";
    } 
    cout << endl;*/
    return 0;
}
