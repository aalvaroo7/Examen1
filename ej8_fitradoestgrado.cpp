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


