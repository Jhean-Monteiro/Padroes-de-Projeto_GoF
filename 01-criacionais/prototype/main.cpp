#include <iostream>
#include "forma.hpp"

int main() {
    Circulo circuloOriginal(5.0, "vermelho");

    std::unique_ptr<Forma> circuloClonado = circuloOriginal.clone();

    std::cout << "Original: " << circuloOriginal.descricao() << std::endl;
    std::cout << "clonado: " << circuloClonado->descricao() << std::endl;

    return 0;
}