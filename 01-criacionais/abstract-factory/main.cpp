#include <iostream>
#include <memory>
#include "ui_factory.hpp"


void construirTela(const UIFactory& factory) {
    std::unique_ptr<Botao> botao = factory.criarBotao();
    std::unique_ptr<Checkbox> checkbox = factory.criarCheckbox();


    std::cout << botao->renderizar() << std::endl << checkbox->renderizar() << std::endl;
}


int main() {
    std::cout << "-- Tema Claro" << std::endl;
    TemaClaroFactory temaClaro;
    construirTela(temaClaro);

    std::cout << "-- Tema Escuro" << std::endl;
    TemaEscuroFactory temaEscuro;
    construirTela(temaEscuro);

    std::cout << "-- Tema Dracula" << std::endl;
    TemaDraculaFactory temaDracula;
    construirTela(temaDracula);
}