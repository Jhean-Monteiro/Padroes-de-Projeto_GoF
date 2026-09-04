#pragma once
#include <string>

class Renderizador {
    public:
        virtual ~Renderizador();
        virtual std::string desenharCirculo(double raio) const = 0;
        virtual std::string desenharQuadrado(double lado) const = 0;
};

class RenderizadorVetorial : public Renderizador {
    public:
        std::string desenharCirculo(double raio) const override;
        std::string desenharQuadrado(double lado) const override;
};

class RenderizadorRaster : public Renderizador {
    public:
        std::string desenharCirculo(double raio) const override;
        std::string desenharQuadrado(double lado) const override;
};

class RenderizadorTranscendeAMateria : public Renderizador {
    public:
        std::string desenharCirculo(double raio) const override;
        std::string desenharQuadrado(double lado) const override;
};