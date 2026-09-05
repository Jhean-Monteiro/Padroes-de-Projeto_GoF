#pragma once
#include <string>

class Cafe {
    public:
        virtual ~Cafe();
        virtual double custo() const = 0;
        virtual std::string descricao() const = 0;
};

class CafeSimples : public Cafe {
    public:
        double custo() const override;
        std::string descricao() const override;
};