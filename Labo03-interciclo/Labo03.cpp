#include <iostream>

using namespace std;

struct nodo
{
    int dato;
    nodo *siguiente;
};
bool pilaVacia(nodo *tope);
bool pilaVacia(nodo *tope)
{
    return (tope == NULL);
}

int main()
{
    nodo *tope = NULL;

    return 0;
}
