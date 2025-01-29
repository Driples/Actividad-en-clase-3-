#include "OperacionesBasicas.h"
#include <stdexcept>

namespace LibreriaMatematica {
    double OperacionesBasicas::Sumar(double a, double b) {
        return a + b;
    }

    double OperacionesBasicas::Restar(double a, double b) {
        return a - b;
    }

    double OperacionesBasicas::Multiplicar(double a, double b) {
        return a * b;
    }

    double OperacionesBasicas::Dividir(double a, double b) {
        if (b == 0) throw std::invalid_argument("División por cero");
        return a / b;
    }
}
