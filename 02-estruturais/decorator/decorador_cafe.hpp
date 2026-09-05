#pragma once
#include "cafe.hpp"
#include <memory>

class DecoradorCafe : public Cafe {
    public:
        DecoradorCafe(std::unique_ptr<Cafe> cafe);

    protected:
        std::unique_ptr<Cafe> cafe_;
};


class ComLeite : public DecoradorCafe {
    public:
        ComLeite(std::unique_ptr<Cafe> cafe);
        double custo() const override;
        std::string descricao() const override;
};

class ComChantilly : public DecoradorCafe {
    public:
        ComChantilly(std::unique_ptr<Cafe> cafe);
        double custo() const override;
        std::string descricao() const override;
};