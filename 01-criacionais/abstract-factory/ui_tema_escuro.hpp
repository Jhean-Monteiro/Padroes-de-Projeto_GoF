#pragma once
#include "ui_produtos.hpp"

class BotaoEscuro : public Botao {
    public:
        std::string renderizar() const override;
};

class CheckboxEscuro : public Checkbox {
    public:
        std::string renderizar() const override;
};