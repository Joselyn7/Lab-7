#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &ar = a; //Tomamos de referencia a la variable a
    ar = 20;
    cout << a; // 20
    
    int &b = 5;// Error de compilación. No podemos referenciar a un valor temporal
    int &c; //Error, no podemos referenciar a algo inexistente.
    const int &d = 6; // A pesar que se va referenciar un rvalue, este es un const y posteriormente no 	                // podrá ser modificado ya que solo es de lectura. No hay error de compilación.
}

