#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Estudiante {
public:
    Estudiante(string nombre, int grado) : nombre(nombre), grado(grado) {}
    string obtenerNombre() const {
        return nombre;
    }
    int obtenerGrado() const {
        return grado;
    }
private:
    string nombre;
    int grado;
};
int main() {
    vector<Estudiante> estudiantes;
    estudiantes.push_back(Estudiante("Juan", 10));
    estudiantes.push_back(Estudiante("Maria", 11));
    estudiantes.push_back(Estudiante("Pedro", 10));
    estudiantes.push_back(Estudiante("Ana", 11));
    estudiantes.push_back(Estudiante("Luis", 10));

    cout << "<gardos disponibles\n>" << endl;
    for (const Estudiante &estudiante: estudiantes) {
        cout << estudiante.obtenerNombre() << "-Grado" << estudiante.obtenerGrado() << endl;
    }
    int gradoBuscado;
    cout << "Introduce el grado a buscar: ";
    cin >> gradoBuscado;

    cout << "estudiantes del grado " << gradoBuscado << endl;
    for (const Estudiante &estudiante: estudiantes) {
        if (estudiante.obtenerGrado() == gradoBuscado) {
            cout << estudiante.obtenerNombre() << endl;
        }
    }
    return 0;
}

