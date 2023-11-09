#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <iostream>
#include <vector>
#include <string>
class Estudiante {
public:
    Estudiante(string nombre) : nombre(nombre) {}

    void registrar_materia(const string& asignaturas) {
        asignaturas.push_back(asignaturas);
    }

    void listar_materias() {
        cout << nombre << " ha registrado las siguientes materias: ";
        for (const string& materia : materias) {
            cout << asignaturas << ", ";
        }
        cout << endl;
    }
private:
    string nombre;
    vector<string> materias;
};

int main() {
    Estudiante estudiante("Juan");

    estudiante.registrar_materia("Matematicas");
    estudiante.registrar_materia("Fisica");
    estudiante.registrar_materia("Programacion");

    estudiante.listar_materias();

    return 0;
}


