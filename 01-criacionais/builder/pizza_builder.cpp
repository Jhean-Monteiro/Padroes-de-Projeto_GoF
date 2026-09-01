#include "pizza_builder.hpp"

PizzaBuilder& PizzaBuilder::comTamanho(const std::string&  tamanho) {
    pizza_.setTamanho(tamanho);
    return *this;
}

PizzaBuilder& PizzaBuilder::comMassa(const std::string& massa) {
    pizza_.setMassa(massa);
    return *this;
}

PizzaBuilder& PizzaBuilder::comIngrediente(const std::string& ingrediente) {
    pizza_.adicionarIngrediente(ingrediente);
    return *this;
}

Pizza PizzaBuilder::construir() const {
    return pizza_;
}