#pragma once
#include "ui_produtos.hpp"

class BotaoDracula : public Botao {
    public:
        std::string renderizar() const override;
};

class CheckboxDracula : public Checkbox {
    public:
        std::string renderizar() const override;
};