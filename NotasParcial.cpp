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
    void AgregarEstudiante(void);
    float MostrarPromedio(void);
    void MostrarEstudiante(void);

};

ListaEnlazada::ListaEnlazada(){
    head = nullptr;
}

void ListaEnlazada::AgregarEstudiante(void){
    nodo* nuevo = new nodo();
   
    cout << "Nombre del Estudiante: ";
    cin.ignore();
    getline(cin, nuevo -> dato.nombre);
    cout << "Nota Final: ";
    cin >> nuevo -> dato.NotaFinal;

    nuevo -> sig = head;
    head = nuevo;

}

int main() {
    ListaEnlazada lista;
    int opcion;

    do {
        cout << "1. Agregar estudiante" << endl
            << "2. Listas de estudiantes" << endl
            << "3. Promedio de notas" << endl
            << "4. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
        case 1:
            lista.AgregarEstudiante();
            break;
        case 2:
            lista.MostrarEstudiante();
            break;
        case 3:
            lista.MostrarPromedio();
            break;
        }
    } while (opcion != 4);
    return 0;
}