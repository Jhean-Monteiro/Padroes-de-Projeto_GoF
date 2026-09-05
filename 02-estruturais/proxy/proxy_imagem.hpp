#pragma once
#include "imagem.hpp"
#include <memory>
#include <string>

class ProxyImagem : public Imagem {
    public:
        ProxyImagem(const std::string& arquivo);
        void exibir() const override;

    private:
        std::string arquivo_;
        mutable std::unique_ptr<ImagemReal> ImagemReal_;
};