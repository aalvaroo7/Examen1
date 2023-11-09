#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> notas = {8, 9, 7, 9, 8};

    cout << "Mis calificaciones:";
    for (int nota : notas) {
        cout << " " << nota;
    }
