#pragma once
#include "subsistemas.hpp"

class HomeTheaterFacade {
    public:
        void assistirFilme();
        void encerrarFilme();

    private:
        Projetor projetor_;
        SistemaSom som_;
        LuzAmbiente luz_;  
};