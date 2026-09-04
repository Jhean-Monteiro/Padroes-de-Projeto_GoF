#pragma once

class Pagamento {
    public:
        virtual ~Pagamento();
        virtual void processar(double valor) const = 0;
};