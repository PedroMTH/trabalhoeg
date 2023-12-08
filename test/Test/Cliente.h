#pragma once
#include <iostream>
#include <vector>

class Cliente
{
private:
    std::string nome;
    int id;

public:
    Cliente(const std::string& nome, int id) : nome(nome), id(id) {}

    std::string getNome() const {
        return nome;
    }

    int getId() const {
        return id;
    }
};

