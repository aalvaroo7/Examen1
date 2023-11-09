#include <iostream>
#include <stdexcept>
using namespace std;
class Estudiante {
private:
    string nombre;
    int edad;
    string grado;
public:
    // Constructor para inicializar las propiedades del estudiante
    Estudiante() {
        nombre = "";
        edad = 0;
        grado = "";
    }
