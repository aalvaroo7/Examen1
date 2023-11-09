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


}

