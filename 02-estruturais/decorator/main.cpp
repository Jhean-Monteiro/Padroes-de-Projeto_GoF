#include <iostream>
#include <memory>
#include "cafe.hpp"
#include "decorador_cafe.hpp"

int main() {
    std::unique_ptr<Cafe> pedido = std::make_unique<CafeSimples>();
    pedido = std::make_unique<ComLeite>(std::move(pedido));
    pedido = std::make_unique<ComChantilly>(std::move(pedido));

    std::cout << pedido->descricao() << " = R$ " << pedido->custo() << std::endl;

    return 0;
}