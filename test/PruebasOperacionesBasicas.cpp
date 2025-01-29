#include <gtest/gtest.h>
#include "../OperacionesBasicas.h"

TEST(PruebasOperacionesBasicas, Suma) {
    EXPECT_EQ(LibreriaMatematica::OperacionesBasicas::Sumar(2, 3), 5);
}

TEST(PruebasOperacionesBasicas, DivisionPorCero) {
    EXPECT_THROW(LibreriaMatematica::OperacionesBasicas::Dividir(5, 0), std::invalid_argument);
}
