#include <iostream>
#include "pagamento.hpp"
#include "gateway_externo.hpp"
#include "adapter_gateway.hpp"

void realizarCompra(const Pagamento& pagamento, double valor) {
    std::cout << "Iniciando compra de R$ " << valor << std::endl;
    pagamento.processar(valor);
}

int main() {
    GatewayExterno gateway;
    AdapterGatewayExterno adapter(gateway);

    realizarCompra(adapter, 29.90);
    realizarCompra(adapter, 150.50);

    return 0;
}