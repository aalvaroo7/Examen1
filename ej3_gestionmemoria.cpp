#include <iostream>
using namespace std;

//defino una funcion intercambiar que cambia dos punteros a enteros

 void intercambiar(int *a,int *b){

//como no se pueden asignar punteros a punteros, creo una variable temporal
//llamada mom que almacena el valor de a

 int mom=*a;

//asigno el valor de b a "a"

*a=*b;

//asigno el valor de mom a "b"

*b=mom;

}

int main() {
     int num1=928;
        int num2=922;
 }