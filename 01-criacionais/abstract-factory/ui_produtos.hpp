#pragma once
#include <string>

class Botao {
    public:
        virtual ~Botao();
        virtual std::string renderizar() const = 0;
};

class Checkbox {
    public:
        virtual ~Checkbox();
        virtual std::string renderizar() const = 0;
};