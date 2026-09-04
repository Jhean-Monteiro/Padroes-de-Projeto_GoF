#pragma once
#include "renderizador.hpp"
#include <string>

class Forma {
    public:
        Forma(Renderizador& renderizador);
        virtual ~Forma();
        virtual std::string desenhar() const = 0;

    protected:
        Renderizador& renderizador_;
};



class Circulo : public Forma {
    public:
        Circulo(Renderizador& renderizador, double raio);
        std::string desenhar() const override;

    private:
        double raio_;
};

class Quadrado : public Forma {
    public:
        Quadrado(Renderizador& renderizador, double lado);
        std::string desenhar() const override;

    private:
        double lado_;
};