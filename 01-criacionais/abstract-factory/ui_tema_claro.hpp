#pragma once
#include "ui_produtos.hpp"

class BotaoClaro : public Botao {
    public:
        std::string renderizar() const override;
};

class CheckboxClaro : public Checkbox {
    public:
        std::string renderizar() const override;
};