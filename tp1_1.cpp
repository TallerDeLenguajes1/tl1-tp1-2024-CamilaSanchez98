#include <iostream>
using namespace std;

int main() {
    cout << "Hola mundo :D" << endl;
    /*
    Declare un puntero en el procedimiento principal que apunte a una variable de algún tipo y muestre por pantalla lo siguiente:
        1) El contenido del puntero
        2) La dirección de memoria almacenada por el puntero.
        3) la dirección de memoria de la variable.
        4) la dirección de memoria del puntero.
        5) el tamaño de memoria utilizado por esa variable usando la función sizeof()
   */
    int numero = 10;
    int* pNumero = &numero;

    cout << "Contenido del puntero: " << *pNumero << endl;
    cout << "Direccion de memoria que almacena el puntero: " << pNumero << endl;
    cout << "Direccion de memoria de la variable: " << &numero << endl;
    cout << "Direccion de memoria del puntero: " << &pNumero << endl;
    cout << "Tamaño de memoria utilizado por la variable: " << sizeof(numero) << endl;

    return 0;
}
