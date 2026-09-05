#include <iostream>
#include "estacao.hpp"

class PainelCelular : public Observador {
    public:
        void atualizar(double temperatura) const override {
            std::cout << "[Celular] Temperatura: " << temperatura << "c" << std::endl;
        }
};

class PainelWeb : public Observador {
    public:
        void atualizar(double temperatura) const override {
            std::cout << "[Web] Temperatura: " << temperatura << "c" << std::endl;
        }
};

int main() {
    EstacaoMeteorologica estacao;
    PainelCelular celular;
    PainelWeb web;

    estacao.inscrever(&celular);
    estacao.inscrever(&web);

    estacao.setTemperatura(25.5);

    estacao.setTemperatura(28.9);
    return 0;
}