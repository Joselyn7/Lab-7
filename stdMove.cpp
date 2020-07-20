#include <iostream>
#include <string>
using namespace std;
string hocus_pocus = "Hocus Pocus!"; //variable global

void f(string &s) // Función que recibe una referencia normal.
{ 
    cout<<"llamada a la primera sobrecarga"<<endl;
}

void f(string &&s) // Función que recibe una RvD.
{
    cout<<"llamada a la segunda sobrecarga"<<endl;
}

int main()
{
    f(hocus_pocus);                // Llama a la primera sobrecarga.
    f("Hocus Pocus!");             // Llama a la segunda sobrecarga.
    f(string("Lorem Ipsum!")); // Llama a la segunda sobrecarga.  

    f(std::move(hocus_pocus)); //Llama a la segunda sobrecarga.
			// no olvidar que hocus_pocus es un lvalue.
    return 0;
}

