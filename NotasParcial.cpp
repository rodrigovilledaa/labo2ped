#include <iostream>

using namespace std;

struct Estudiante{
    string nombre;
    int NotaFinal;
};

struct nodo{
    int dato;
    nodo *sig;
};

class ListaEnlazada{
    private:
    nodo *head;

    public:
    ListaEnlazada();
    void AgregarEstudiante(void);
    void MostrarPromedio(void);
    void MostrarEstudiante(void);

};