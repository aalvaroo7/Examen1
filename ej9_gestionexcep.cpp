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