#include "adapter_gateway.hpp"

AdapterGatewayExterno::AdapterGatewayExterno(GatewayExterno& gateway) : gateway_(gateway) {}


void AdapterGatewayExterno::processar(double valor) const {
    int centavos = static_cast<int>(valor * 100);
    gateway_.executarCobranca(centavos);
}