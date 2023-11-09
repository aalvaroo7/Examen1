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
// Función para establecer los datos del estudiante

    void establecer_datos(std::string nombre, int edad, std::string grado) {
        this->nombre = nombre;
        this->edad = edad;
        this->grado = grado;
    }
