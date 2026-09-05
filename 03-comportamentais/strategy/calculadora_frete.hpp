#pragma once
#include "frete.hpp"
#include <memory>

class CalculadoraFrete {
    public:
        CalculadoraFrete(std::unique_ptr<EstrategiaFrete> estrategia);
        void setEstrategia(std::unique_ptr<EstrategiaFrete> estrategia);
        double calcular(double pesoKg) const;

    private:
        std::unique_ptr<EstrategiaFrete> estrategia_;
};