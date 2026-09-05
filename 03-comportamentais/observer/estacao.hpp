#pragma once
#include "observador.hpp"
#include <vector>

class EstacaoMeteorologica {
    public:
        void inscrever(Observador* observador);
        void desinscrever(Observador* observador);
        void setTemperatura(double temperatura);

    private:
        void notificarTodos() const;
        double temperatura_ = 0.0;
        std::vector<Observador*> observadores_;
};