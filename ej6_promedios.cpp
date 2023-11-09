#include <iostream>
#include <string>

using namespace std;
class RegistroAsistencia {
public:
    RegistroAsistencia(string fecha, string estado) : fecha(fecha), estado(estado) {}

    void mostrar_asistencia() {
        cout << "Fecha de la clase: " << fecha << ", Estado de asistencia: " << estado << endl;
    }
private:
    string fecha;
    string estado;
};
int main(){
    RegistroAsistencia asistencia1("2021-10-01", "Presente");
    RegistroAsistencia asistencia2("2021-10-02", "Ausente");
    RegistroAsistencia asistencia3("2021-10-03", "Presente");
    asistencia.mostrar_asistencia();
    return 0;
}


