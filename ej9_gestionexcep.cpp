#include <iostream>
#include <string>
#include <vector>
using namespace std;
class asignaturaRegistradaException :
public:
    asignaturaRegistradaException(string asignatura) : asignatura(asignatura) {}
    string obtenerAsignatura() const {
        return asignatura;
    }
private:
    string asignatura;
};
class Estudiante {
public:
    Estudiante(string nombre) : nombre(nombre) {}
    void registrar_materia(const string& asignatura) {
        for (const string& asignaturaRegistrada : asignaturas) {
            if (asignaturaRegistrada == asignatura) {
                throw asignaturaRegistradaException(asignatura);
            }
        }
        asignaturas.push_back(asignatura);
    }
    void listar_materias() {
        cout << nombre << " ha registrado las siguientes materias: ";
        for (const string& asignatura : asignaturas) {
            cout << asignatura << ", ";
        }
        cout << endl;
    }
};