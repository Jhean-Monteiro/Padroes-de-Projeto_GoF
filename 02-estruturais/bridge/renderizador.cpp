#include "renderizador.hpp"

Renderizador::~Renderizador() {}

std::string RenderizadorVetorial::desenharCirculo(double raio) const {
    return "Circulo vetorial (raio " + std::to_string(raio) + ")";
}

std::string RenderizadorVetorial::desenharQuadrado(double lado) const {
    return "Quadrado vetorial (lado " + std::to_string(lado) + ")";
}


std::string RenderizadorRaster::desenharCirculo(double raio) const {
    return "Circulo raster (raio " + std::to_string(raio) + ")";
}

std::string RenderizadorRaster::desenharQuadrado(double lado) const {
    return "Quadrado raster (lado " + std::to_string(lado) + ")";
}

std::string RenderizadorTranscendeAMateria::desenharCirculo(double raio) const {
    return "Circulo superior (raio " + std::to_string(raio) + ")";
}

std::string RenderizadorTranscendeAMateria::desenharQuadrado(double lado) const {
    return "Quadrado superior (lado " + std::to_string(lado) + ")";
}