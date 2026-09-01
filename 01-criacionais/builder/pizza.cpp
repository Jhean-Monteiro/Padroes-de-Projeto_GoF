#include "pizza.hpp"

void Pizza::setTamanho(const std::string& tamanho) {
    tamanho_ = tamanho;
}

void Pizza::setMassa(const std::string& massa) {
    massa_ = massa;
}

void Pizza::adicionarIngrediente(const std::string& ingrediente) {
    ingredientes_.push_back(ingrediente);
}

std::string Pizza::descricao() const {
    std::string resultado = "Pizza " + tamanho_ + ", massa " + massa_ + ", ingredientes: ";

    for (size_t i = 0; i < ingredientes_.size(); i++) {
        resultado += ingredientes_[i];
        if (i < ingredientes_.size() - 1) {
            resultado += ", ";
        }
    }

    return resultado;
}