#include <gtest/gtest.h>
#include "../OperacionesAvanzadas.h"

TEST(PruebasOperacionesAvanzadas, Factorial) {
    EXPECT_EQ(LibreriaMatematica::OperacionesAvanzadas::Factorial(5), 120);
}

TEST(PruebasOperacionesAvanzadas, Combinacion) {
    EXPECT_EQ(LibreriaMatematica::OperacionesAvanzadas::Combinacion(5, 2), 10);
}
