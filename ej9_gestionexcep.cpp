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
    void lista_materias() {
        cout << nombre << " ha registrado las siguientes materias: ";
        for (const string& asignatura : asignaturas) {
            cout << asignatura << ", ";
        }
        cout << endl;

    }
private:
    string nombre;
    vector<string> asignaturas;
};

int main(){
    Estudiante estudiante("paco");

    try {
        estudiante.registrar_materia("Matematicas");
        estudiante.registrar_materia("Fisica");
        estudiante.registrar_materia("Programacion");
        estudiante.registrar_materia("Programacion");
    } catch (const asignaturaRegistradaException& e) {
        cout << "La asignatura " << e.obtenerAsignatura() << " ya ha sido registrada" << endl;
    }

    estudiante.lista_materias();

    return 0;


};