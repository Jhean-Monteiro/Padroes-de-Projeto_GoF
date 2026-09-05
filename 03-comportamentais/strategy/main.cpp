#include <iostream>
#include <memory>
#include "calculadora_frete.hpp"

int main() {
    CalculadoraFrete calculadora(std::make_unique<FreteSedex>());
    std::cout << "Sedex: R$ " << calculadora.calcular(2.0) << std::endl;

    calculadora.setEstrategia(std::make_unique<FretePac>());
    std::cout << "Pac: R$ " << calculadora.calcular(2.0) << std::endl;

    calculadora.setEstrategia(std::make_unique<FreteGratis>());
    std::cout << "Pac: R$ " << calculadora.calcular(2.0) << std::endl;
}