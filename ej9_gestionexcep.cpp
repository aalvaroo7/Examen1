#include <iostream>
#include <vector>
#include <string>

using namespace std;

class MateriaYaRegistradaException {
public:
    MateriaYaRegistradaException(const string& materia) : materia(materia) {}

    string getMateria() const {
        return materia;
    }
private:
    string materia;
};

class Alumno {
public:
    Alumno(string nombre) : nombre(nombre) {}

    void inscribir_curso(const string& curso) {
        for (const string& cursoInscrito : cursos) {
            if (cursoInscrito == curso) {
                throw MateriaYaRegistradaException(curso);
            }
        }
        cursos.push_back(curso);
    }
    void listar_cursos() {
        cout << "El alumno " << nombre << " está inscrito en los siguientes cursos: ";
        for (const string& curso : cursos) {
            cout << curso << ", ";
        }
        cout << endl;
    }
private:
    string nombre;
    vector<string> cursos;
};

class MiAlumno : public Alumno {
public:
    MiAlumno(string nombre) : Alumno(nombre) {}

    void metodo_personalizado() {
        cout << "Este es un método personalizado para el alumno " << nombre << "." << endl;
    }
};