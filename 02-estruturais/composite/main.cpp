#include <iostream>
#include <memory>
#include "pasta.hpp"
#include "arquivo.hpp"

int main() {
    auto pastaRaiz = std::make_unique<Pasta>("projeto");
    pastaRaiz->adicionar(std::make_unique<Arquivo>("main.cpp", 200));

    auto subPasta = std::make_unique<Pasta>("src");
    subPasta->adicionar(std::make_unique<Pasta>("utils", 150));
    subPasta->adicionar(std::make_unique<Arquivo>("utils.hpp"));

    pastaRaiz->adicionar(std::move(subPasta));

    std::cout << pastaRaiz->nome() << ": " << pastaRaiz->tamanho() << " bytes" << std::endl;

    return 0;
}