#pragma once
#include <iostream>
#include <vector>

class Produto
{
private:
    std::string nome;
    double preco;

public:
    Produto(const std::string& nome, double preco) : nome(nome), preco(preco) {}

    std::string getNome() const {
        return nome;
    }

    double getPreco() const {
        return preco;
    }
};