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
void sumar(nodo *tope);
void menu(nodo *&tope);

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

void sumar(nodo *tope)
{
    if (pilaVacia(tope))
    {
        cout << "La pila esta vacia. Suma = 0\n";
        return;
    }

    int suma = 0;
    nodo *aux = tope;

    while (aux != NULL)
    {
        suma += aux->dato;
        aux = aux->siguiente;
    }

    cout << "La suma de los elementos es: " << suma << endl;
}

void menu(nodo *&tope)
{
    int opcion;

    do
    {
        cout << "\n--- MENU PILA ---\n";
        cout << "1. Insertar (push)\n";
        cout << "2. Eliminar tope (pop)\n";
        cout << "3. Mostrar tope (top)\n";
        cout << "4. Mostrar pila\n";
        cout << "5. Sumar elementos\n";
        cout << "6. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            push(tope);
            break;
        case 2:
            pop(tope);
            break;
        case 3:
            top(tope);
            break;
        case 4:
            mostrar(tope);
            break;
        case 5:
            sumar(tope);
            break;
        case 6:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opcion invalida.\n";
        }

    } while (opcion != 6);
}

int main()
{
    nodo *tope = NULL;
    menu(tope);

    return 0;
}
