#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> notas = {8, 9, 7, 9, 8};

    cout << "Mis calificaciones:";
    for (int nota : notas) {
        cout << " " << nota;
    }
        cout << endl;

        int suma = 0;
        for (int nota : notas) {
            suma += nota
        }

        double media = static_cast<double>(suma) / notas.size();

        cout << "El promedio de las calificaciones es: " << media << endl;

        return 0;
    }


