#include "pch.h"
#include <gtest/gtest.h>
#include "Cliente.h"
#include "Produto.h"

// Teste para a classe Cliente
TEST(MinhaFuncaoTeste, TesteTransformarString) {
    Cliente P("Pedro", 3);
    EXPECT_EQ(P.getNome(), "Pedro");
    EXPECT_EQ(P.getId(), 3);
}

// Teste para a classe Produto
TEST(MinhaFuncaoe, TesteTransformar) {
    Produto MB("Placa mae", 1250);
    EXPECT_EQ(MB.getNome(), "Placa mae");
    EXPECT_EQ(MB.getPreco(), 1250);
}
