#pragma once
#include "pizza.hpp"
#include <string>

class PizzaBuilder {
    public:
        PizzaBuilder& comTamanho(const std::string& tamanho);
        PizzaBuilder& comMassa(const std::string& massa);
        PizzaBuilder& comIngrediente(const std::string& ingrediente);

        Pizza construir() const;

    private:
        Pizza pizza_;
};