#include "calculadora_frete.hpp"

CalculadoraFrete::CalculadoraFrete(std::unique_ptr<EstrategiaFrete> estrategia)
    : estrategia_(std::move(estrategia)) {}

void CalculadoraFrete::setEstrategia(std::unique_ptr<EstrategiaFrete> estrategia) {
    estrategia_ = std::move(estrategia);
}

double CalculadoraFrete::calcular(double pesoKg) const {
    return estrategia_->calcular(pesoKg);
}