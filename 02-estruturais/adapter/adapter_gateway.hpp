#pragma once
#include "pagamento.hpp"
#include "gateway_externo.hpp"

class AdapterGatewayExterno : public Pagamento {
    public:
        AdapterGatewayExterno(GatewayExterno& gateway);

        void processar(double valor) const override;
        
    private:
        GatewayExterno& gateway_;
};