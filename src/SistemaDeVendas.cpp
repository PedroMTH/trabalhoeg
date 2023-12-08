#include <iostream>
#include <vector>

class Produto {
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

class Cliente {
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

class Pedido {
private:
    Cliente cliente;
    std::vector<Produto> produtos;

public:
    Pedido(const Cliente& cliente) : cliente(cliente) {}

    void adicionarProduto(const Produto& produto) {
        produtos.push_back(produto);
    }

    double calcularTotal() const {
        double total = 0.0;
        for (const Produto& produto : produtos) {
            total += produto.getPreco();
        }
        return total;
    }

    const Cliente& getCliente() const {
        return cliente;
    }

    const std::vector<Produto>& getProdutos() const {
        return produtos;
    }
};

class Vendas {
public:
    static void exibirRecibo(const Pedido& pedido) {
        std::cout << "Recibo do Pedido\n";
        std::cout << "Cliente: " << pedido.getCliente().getNome() << " (ID: " << pedido.getCliente().getId() << ")\n";
        std::cout << "Produtos:\n";
        for (const Produto& produto : pedido.getProdutos()) {
            std::cout << "  - " << produto.getNome() << ": R$ " << produto.getPreco() << "\n";
        }
        std::cout << "Total: R$ " << pedido.calcularTotal() << "\n";
    }
};

int main() {
    Produto cpu("Processador", 2500.0);
    Produto gpu("Placa de Video", 1700.0);
    Produto ram("Memoria RAM", 600.0);

    Cliente cliente("Joao", 1);

    Pedido pedido(cliente);
    pedido.adicionarProduto(cpu);
    pedido.adicionarProduto(gpu);
    pedido.adicionarProduto(ram);

    Vendas::exibirRecibo(pedido);

    return 0;
}
