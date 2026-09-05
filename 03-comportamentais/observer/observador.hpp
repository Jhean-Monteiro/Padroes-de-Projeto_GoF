#pragma once

class Observador {
    public:
        virtual ~Observador();
        virtual void atualizar(double temperatura) const = 0;
};