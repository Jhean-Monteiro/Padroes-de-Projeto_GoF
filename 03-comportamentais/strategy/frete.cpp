#include "frete.hpp"

EstrategiaFrete::~EstrategiaFrete() {}

double FreteSedex::calcular(double pesoKg) const {
    return pesoKg * 3.5 + 20.0;
}

double FretePac::calcular(double pesoKg) const {
    return pesoKg * 1.8 + 8.0;
}

double FreteGratis::calcular(double pesoKg) const {
    return pesoKg * 0;
}