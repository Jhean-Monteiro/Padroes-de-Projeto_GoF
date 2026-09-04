#include "pasta.hpp"

Pasta::Pasta(const std::string& nome) : nome_(nome) {}

void Pasta::adicionar(std::unique_ptr<ComponenteArquivo> item) {
    filhos_.push_back(std::move(item));
}

int Pasta::tamanho() const {
    int total = 0;
    for (const auto& filho : filhos_) {
        total += filho->tamanho();
    }
    return total;
}

std::string Pasta::nome() const {
    return nome_;
}