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