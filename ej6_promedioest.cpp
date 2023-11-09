#include <iostream>
#include <vector>
    using namespace std;
    int main() {
        vector<int> notas = {8, 9, 7, 9, 8};

        cout << "Mis notas:";
        for (int nota : notas) {
            cout << " " << nota;
        }
        cout << endl;

        int suma = 0;
        for (int calificacion : notas) {
            suma += calificacion;
        }

        double promedio = static_cast<double>(suma) / notas.size();

        cout << "El promedio de las calificaciones es: " << promedio << endl;

        return 0;
    }



