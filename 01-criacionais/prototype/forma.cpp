#include "forma.hpp"


Forma::~Forma() {}

Circulo::Circulo(double raio, const std::string& cor) : raio_(raio), cor_(cor) {}

std::unique_ptr<Forma> Circulo::clone() const {
    return std::make_unique<Circulo>(*this);
}

std::string Circulo::descricao() const {
    return "Circulo raio=" + std::to_string(raio_) + " cor=" + cor_;
}


Retangulo::Retangulo(double largura, double altura, const std::string& cor) : largura_(largura), altura_(altura), cor_(cor) {}

std::unique_ptr<Forma> Retangulo::clone() const {
    return std::make_unique<Retangulo>(*this);
}

std::string Retangulo::descricao() const {
    return "Retangulo largura=" + std::to_string(largura_) + "altura=" + std::to_string(altura_) + "cor=" + cor_;
}