#include "OperacionesAvanzadas.h"
#include <stdexcept>

namespace LibreriaMatematica {
    unsigned long long OperacionesAvanzadas::Factorial(int n) {
        if (n < 0) throw std::invalid_argument("El factorial de un número negativo no está definido");
        unsigned long long resultado = 1;
        for (int i = 1; i <= n; ++i) {
            resultado *= i;
        }
        return resultado;
    }

    unsigned long long OperacionesAvanzadas::Combinacion(int n, int r) {
        if (n < 0 || r < 0 || n < r) throw std::invalid_argument("Entradas inválidas para la combinación");
        return Factorial(n) / (Factorial(r) * Factorial(n - r));
    }
}
