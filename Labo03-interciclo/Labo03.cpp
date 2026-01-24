#include <iostream>

using namespace std;

struct nodo
{
    int dato;
    nodo *siguiente;
};
bool pilaVacia(nodo *tope);
void push(nodo *&tope);
void pop(nodo *&tope);
void top(nodo *tope);
void mostrar(nodo *tope);

bool pilaVacia(nodo *tope)
{

    return (tope == NULL);
}

void push(nodo *&tope)
{
    int dato;
    cout << "Ingrese el numero: ";
    cin >> dato;

    nodo *nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->siguiente = tope;
    tope = nuevo;

    cout << "Dato insertado correctamente.\n";
}

void pop(nodo *&tope)
{
    if (pilaVacia(tope))
    {
        cout << "La pila esta vacia. No se puede eliminar.\n";
        return;
    }

    nodo *aux = tope;
    cout << "Elemento eliminado: " << aux->dato << endl;
    tope = aux->siguiente;
    delete aux;
}

void top(nodo *tope)
{
    if (pilaVacia(tope))
    {
        cout << "La pila esta vacia. No hay tope.\n";
    }
    else
    {
        cout << "Elemento del tope: " << tope->dato << endl;
    }
}

void mostrar(nodo *tope)
{
    if (pilaVacia(tope))
    {
        cout << "La pila esta vacia.\n";
        return;
    }

    cout << "Elementos de la pila:\n";
    nodo *aux = tope;

    while (aux != NULL)
    {
        cout << aux->dato << endl;
        aux = aux->siguiente;
    }
}

int main()
{
    nodo *tope = NULL;

    return 0;
}
