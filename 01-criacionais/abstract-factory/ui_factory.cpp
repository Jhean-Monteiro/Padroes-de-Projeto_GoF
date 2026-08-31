#include "ui_factory.hpp"
#include "ui_tema_claro.hpp"
#include "ui_tema_escuro.hpp"
#include "ui_tema_dracula.hpp"


UIFactory::~UIFactory() {}


std::unique_ptr<Botao> TemaClaroFactory::criarBotao() const {
    return std::make_unique<BotaoClaro>();
}

std::unique_ptr<Checkbox> TemaClaroFactory::criarCheckbox() const {
    return std::make_unique<CheckboxClaro>();
}

std::unique_ptr<Botao> TemaEscuroFactory::criarBotao() const {
    return std::make_unique<BotaoEscuro>();
}

std::unique_ptr<Checkbox> TemaEscuroFactory::criarCheckbox() const {
    return std::make_unique<CheckboxEscuro>();
}




std::unique_ptr<Botao> TemaDraculaFactory::criarBotao() const {
    return std::make_unique<BotaoDracula>();
}

std::unique_ptr<Checkbox> TemaDraculaFactory::criarCheckbox() const {
    return std::make_unique<CheckboxDracula>();
}