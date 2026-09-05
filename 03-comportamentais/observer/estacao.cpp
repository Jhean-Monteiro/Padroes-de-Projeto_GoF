#include "estacao.hpp"
#include <algorithm>

void EstacaoMeteorologica::inscrever(Observador* observador) {
    observadores_.push_back(observador);
}

void EstacaoMeteorologica::desinscrever(Observador* observador) {
    observadores_.erase(
        std::remove(observadores_.begin(), observadores_.end(), observador),
        observadores_.end()
    );
}


void EstacaoMeteorologica::setTemperatura(double temperatura) {
    temperatura_ = temperatura;
    notificarTodos();
}

void EstacaoMeteorologica::notificarTodos() const {
    for (Observador* observador : observadores_) {
        observador->atualizar(temperatura_);
    }
}