#include <iostream>
using namespace std;

struct Estudiante{
    string nombre;
    float NotaFinal;
};

struct nodo{
    Estudiante dato;
    nodo *sig;
};

class ListaEnlazada{
private:
    nodo *head;

public:
    ListaEnlazada();
    void AgregarEstudiante(string nombre, float NotaFinal);
    float MostrarPromedio(void);
    void MostrarEstudiante(void);
};

ListaEnlazada::ListaEnlazada(){
    head = nullptr;
}

void ListaEnlazada::AgregarEstudiante(string nombre, float NotaFinal){
    nodo* nuevo = new nodo();

    nuevo->dato.nombre = nombre;
    nuevo->dato.NotaFinal = NotaFinal;
    nuevo->sig = head;
    head = nuevo;
}

void ListaEnlazada::MostrarEstudiante(){
    nodo* temp = head;

    while(temp != nullptr){
        cout << "Nombre: " << temp->dato.nombre << endl;
        cout << "Nota final: " << temp->dato.NotaFinal << endl;
        cout << "-------------------" << endl;
        temp = temp->sig;
    }
}

float ListaEnlazada::MostrarPromedio(){
    nodo* temp = head;
    float suma = 0;
    int contador = 0;

    while(temp != nullptr){
        suma += temp->dato.NotaFinal;
        contador++;
        temp = temp->sig;
    }

    if(contador == 0) return 0;

    return suma / contador;
}

int main(){
    ListaEnlazada lista;

    string nombre;
    float nota;

    for(int i = 0; i < 3; i++){
        cout << "Ingrese nombre del estudiante: ";
        cin >> nombre;

        cout << "Ingrese nota final: ";
        cin >> nota;

        lista.AgregarEstudiante(nombre, nota);
    }

    cout << "\n=== Lista de estudiantes ===\n";
    lista.MostrarEstudiante();

    float promedio = lista.MostrarPromedio();
    cout << "\nPromedio final: " << promedio << endl;

    return 0;
}
