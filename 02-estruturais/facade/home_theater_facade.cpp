#include "home_theater_facade.hpp"

void HomeTheaterFacade::assistirFilme() {
    luz_.escurecer();
    projetor_.ligar();
    som_.ligar();
    som_.ajustarVolume(15);
}

void HomeTheaterFacade::encerrarFilme() {
    projetor_.desligar();
    som_.desligar();
    luz_.normalizar();
}