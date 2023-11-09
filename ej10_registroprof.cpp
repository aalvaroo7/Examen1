#include <iostream>
#include <string>

using namespace std;

class Docente {
public:
    Docente(string nombre, int edad, string asignatura, int experiencia)
            : nombre(nombre), edad(edad), asignatura(asignatura), experiencia(experiencia) {}

    void mostrar_informacion_docente() {
        cout << "Nombre del docente: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Asignatura que enseña: " << asignatura << endl;
        cout << "Años de experiencia: " << experiencia << " años" << endl;
    }

private:
    string nombre;
    int edad;
    string asignatura;
    int experiencia;
};
int main() {
    Docente docente("Ana Rodriguez", 35, "Ciencias", 8);

    docente.mostrar_informacion_docente();

    return 0;
}