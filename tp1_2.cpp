#include <iostream>
using namespace std;
using variable = int; //puedo modificar el tipo de variable desde aqui para todo el archivo, como usabamos typedef en C
/*

a) Haga una función que devuelva el cuadrado de un número
b) Haga la función anterior, pero devolviendo un tipo void
c) Al recibir una variable muestre por pantalla la dirección y el contenido de
la variable
d) Dado dos parámetros de entrada, deberá invertir los valores entre
ambos.

void Invertir(a,b) //deberá devolver en el valor de a en la
variable b, y en el valor de b el valor de a

e) Dado dos parámetros de entrada, deberá devolverlos de forma
ordenada, en el primer parámetro el menor y en el segundo el mayor.

void orden(a,b) //deberá devolver en el valor de a el valor más
chico, y en el valor de b el valor más grande

f) Utilice las funciones anteriores para leer pares de valores e imprimirlos
por pantalla.
g) Al finalizar, debe subir todos los cambios al repositorio, usando los
siguientes comandos.
i. git add .
ii. git commit -m “ejercicio 2.4 completado”
iii. git push

*/

int calcularCuadrado(int* pNumero);
void calcularCuadradoMensaje(int* pNumero);
void dirreccionYcontenido(variable* pVariable);
void invertirNumeros(int a, int b);
void ordenarNumeros(int a, int b);

int main(){
    int numero = 10;
    int* pNumero = &numero;

    int cuadrado = calcularCuadrado(pNumero);
    cout << "El cuadrado es: " << cuadrado << endl;
    calcularCuadradoMensaje(pNumero);

    variable  miVariable = numero;
    variable* pVariable = &miVariable;
    dirreccionYcontenido(pVariable);

    cout << "----------------------------------------------" << endl;
    //Uso para leer datos de entrada
    int a,b;

    cout << "Ingrese un número entero a: ";
    cin >> a;
    cout << "Ingrese un número entero b: ";
    cin >> b;

    invertirNumeros(a,b);
    ordenarNumeros(a,b);

    return 0;
}

int calcularCuadrado(int* pNumero){
    cout << "-----------------------CALCULAR CUADRADO-----------------------" << endl;
    int num = *pNumero;
    int cuadrado = num * num;
    return cuadrado;
}
void calcularCuadradoMensaje(int* pNumero){
    cout << "-----------------------CALCULAR CUADRADO (msj)-----------------------" << endl;
    int num = *pNumero;
    int cuadrado = num * num;
    cout << "El cuadrado del numero " << num << " es: " << cuadrado << endl;
}
void dirreccionYcontenido(variable* pVariable){
    cout << "-----------------------DIRECCION Y CONTENIDO DE VARIABLE-----------------------" << endl;
    cout << "La direccion de memoria de la variable es: " << pVariable << endl;
    cout << "El contenido de la variable es: " << *pVariable << endl;

}
void invertirNumeros(int a, int b){
    cout << "-----------------------INVERTIR NUMERO-----------------------" << endl;
    cout << "Valor de a inicial: " << a << endl;
    cout << "Valor de b inicial: " << b << endl;

    int aux = 0;
    aux = a;
    a = b;
    b = aux;

    cout << "Valor de a final: " << a << endl;
    cout << "Valor de b final: " << b << endl;
}
void ordenarNumeros(int a, int b){
    cout << "-----------------------ORDENAR NUMERO-----------------------" << endl;
    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;

    int mayor = a;
    int menor = b;

    if(mayor == b){
        cout << "Son iguales." << endl;
        return;
    }else if( mayor < b){
        mayor = b;
        menor = a;
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Mayor valor: " << mayor << endl;
}