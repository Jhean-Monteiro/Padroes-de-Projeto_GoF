#pragma once
#include <string>

class Imagem {
    public:
    virtual ~Imagem();
    virtual void exibir() const = 0;
};

class ImagemReal : public Imagem {
    public:
        ImagemReal(const std::string& arquivo);
        void exibir() const override;

    private:
        std::string arquivo_;
        void carrregarDoDisco() const;
};