#include <iostream>

using namespace std;

struct nodo
{
    int dato;
    nodo *siguiente;
};
bool pilaVacia(nodo *tope);
bool pilaVacia(nodo *tope) {
    
    return (tope == NULL);
}
void push(nodo* &tope);
void push(nodo* &tope) {
    int dato;
    cout << "Ingrese el numero: ";
    cin >> dato;

    nodo* nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->siguiente = tope;
    tope = nuevo;

    cout << "Dato insertado correctamente.\n";
}


int main()
{
    nodo *tope = NULL;

    return 0;
}
