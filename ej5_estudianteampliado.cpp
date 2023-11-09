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
        asdignaturas.push_back(asignaturas);
    }

    void listar_materias() {
        cout << nombre << " ha registrado las siguientes materias: ";
        for (const string& asignatura : asignatura) {
            cout << materia << ", ";
        }
        cout << endl;
    }


