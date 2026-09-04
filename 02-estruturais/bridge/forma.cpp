#include "forma.hpp"

Forma::Forma(Renderizador& renderizador) : renderizador_(renderizador) {}
Forma::~Forma() {}

Circulo::Circulo(Renderizador& renderizador, double raio) : Forma(renderizador), raio_(raio) {}
std::string Circulo::desenhar() const {
    return renderizador_.desenharCirculo(raio_);
}


Quadrado::Quadrado(Renderizador& renderizador, double lado) : Forma(renderizador), lado_(lado) {}
std::string Quadrado::desenhar() const {
    return renderizador_.desenharQuadrado(lado_);
}