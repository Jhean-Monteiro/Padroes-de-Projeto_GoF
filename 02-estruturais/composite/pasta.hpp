#pragma once
#include "componente_arquivo.hpp"
#include <vector>
#include <memory>

class Pasta : public ComponenteArquivo {
    public:
        Pasta(const std::string& nome);
        void adicionar(std::unique_ptr<ComponenteArquivo> item);
        int tamanho() const override;
        std::string nome() const override;

    
    private:
        std::string nome_;
        std::vector<std::unique_ptr<ComponenteArquivo>> filhos_;
};