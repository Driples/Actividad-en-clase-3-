#include <iostream>
#include <cmath>
#include "OperacionesBasicas.h"
#include "OperacionesAvanzadas.h"

int main() {
    using namespace LibreriaMatematica;

    // Pruebas de OperacionesBasicas
    std::cout << "Suma: " << OperacionesBasicas::Sumar(5, 3) << "\n";
    std::cout << "Resta: " << OperacionesBasicas::Restar(5, 3) << "\n";
    std::cout << "Multiplicación: " << OperacionesBasicas::Multiplicar(5, 3) << "\n";
    std::cout << "División: " << OperacionesBasicas::Dividir(5, 3) << "\n";

    // Pruebas de OperacionesAvanzadas
    std::cout << "Factorial: " << OperacionesAvanzadas::Factorial(5) << "\n";
    std::cout << "Combinación: " << OperacionesAvanzadas::Combinacion(5, 2) << "\n";

    // Raíz cuadrada
    std::cout << "Raíz cuadrada: " << std::sqrt(16) << "\n";

    return 0;
}
