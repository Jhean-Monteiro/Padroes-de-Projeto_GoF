#pragma once
#include <iostream>

class Projetor {
    public:
        void ligar() {
            std::cout << "Projetor ligado" << std:: endl;
        }
        void desligar() {
            std::cout << "Projetor desligado" << std::endl;
        }
};

class SistemaSom {
    public:
        void ligar() {
            std::cout << "Som ligado" << std::endl;
        }
        void ajustarVolume(int volume) {
            std::cout << "Volume ajustado para " << volume << std::endl;
        }
        void desligar() {
            std::cout << "Som desligado" << std::endl;
        }
};

class LuzAmbiente {
    public:
        void escurecer() {
            std::cout << "Luzes diminuidas" << std::endl;
        }
        void normalizar() {
            std::cout << "Luzes normalizadas" << std::endl;
        }
};