#pragma once
#include "componente_arquivo.hpp"


class Arquivo : public ComponenteArquivo {
    public:
        Arquivo(const std::string& nome, int tamanho);
        int tamanho() const override;
        std::string nome() const override;

    private:
        std::string nome_;
        int tamanho_;
};