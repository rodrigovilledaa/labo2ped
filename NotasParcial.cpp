#include <iostream>

using namespace std;

struct Estudiante{
    string nombre;
    int NotaFinal;
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
    nuevo -> dato.nombre = nombre;
    nuevo -> dato.NotaFinal = NotaFinal;
    nuevo -> sig = head;
    head = nuevo;

    cout << "Nombre del Estudiante: ";
    cin >> nombre;
    cin.ignore();
    cout << "Nota Final: ";
    cin >> NotaFinal;

}