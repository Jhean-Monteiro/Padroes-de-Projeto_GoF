#include <iostream>
#include "pizza_builder.hpp"

int main() {
    Pizza pizzaCalabresa = PizzaBuilder()
        .comTamanho("grande")
        .comMassa("fina")
        .comIngrediente("molho de tomate")
        .comIngrediente("calabresa")
        .comIngrediente("cebola")
        .construir();

    
    std::cout << pizzaCalabresa.descricao() << std::endl;

    Pizza pizzaMarguerita = PizzaBuilder()
        .comTamanho("media").comMassa("tradicional")
        .comIngrediente("muçarela")
        .comIngrediente("manjericao")
        .construir();


    std::cout << pizzaMarguerita.descricao() << std::endl;
}