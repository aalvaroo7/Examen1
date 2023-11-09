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
     //declaro dos variables enteras num1 y num2 con valores iniciales
     int num1=928;
        int num2=922;
        cout<<"los valores originales son: "<<num1<<" y "<<num2<<endl;
        //declaro puntero 1 y puntero 2 que apuntan a num1 y num2 respectivamente

int *punt1=&num1;
int *punt2=&num2;

//llamo a la funcion intercambiar pasando los punteros como argumentos
    // La función intercambiar modificará los valores a los que apuntan estos punteros.
    intercambiar(punt1, punt2);

    // Se imprime el valor de num1 y num2 después de la llamada a la función intercambiar,
    // lo que mostrará los valores intercambiados.
    cout << "Valores intercambiados: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
