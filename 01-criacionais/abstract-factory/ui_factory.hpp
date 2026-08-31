#pragma once
#include "ui_produtos.hpp"
#include <memory>

class UIFactory {
    public:
        virtual ~UIFactory();
        virtual std::unique_ptr<Botao> criarBotao() const = 0;
        virtual std::unique_ptr<Checkbox> criarCheckbox() const = 0;
};

class TemaClaroFactory : public UIFactory {
    public:
        std::unique_ptr<Botao> criarBotao() const override;
        std::unique_ptr<Checkbox> criarCheckbox() const override;
};

class TemaEscuroFactory : public UIFactory {
    public:
        std::unique_ptr<Botao> criarBotao() const override;
        std::unique_ptr<Checkbox> criarCheckbox() const override;
};

class TemaDraculaFactory : public UIFactory {
    public:
        std::unique_ptr<Botao> criarBotao() const override;
        std::unique_ptr<Checkbox> criarCheckbox() const override;
};