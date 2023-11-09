
#include <iostream>
#include <stdexcept>
using namespace std;
//uso la division de cero como un ejemplo de excepcion
//uso un tipo de excepcion que ya existe en c++
//runtime_error
//runtime_error es una clase que hereda de la clase exception
//runtime_error es una clase que representa un error en tiempo de ejecucion
int division(int y,int x){
    if (x==0)
        throw runtime_error("Error: division por cero");
    return y/x;
