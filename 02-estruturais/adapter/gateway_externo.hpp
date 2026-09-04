#pragma once
#include <iostream>

class GatewayExterno {
    public:
        void executarCobranca(int centavos) {
            std::cout << "[Gateway Externo] Cobrando " << centavos << " centavos.\n";
        }
};