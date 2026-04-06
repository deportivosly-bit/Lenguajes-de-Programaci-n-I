#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaración de variables
    int edad;
    string nombre;

    // Entrada de datos
 
    cout << "Ingrese su edad: ";
    cin >> edad;

    // Lógica de decisión y salida de resultados
    if (edad >= 18) {
        // Resultado si es mayor de edad
        cout << "\nBienvenido " << nombre << ", eres mayor de edad" << endl;
    } else {
        // Resultado si es menor de edad
        cout << "\nBienvenido " << nombre << ", eres menor de edad" << endl;
    }

    return 0;
}