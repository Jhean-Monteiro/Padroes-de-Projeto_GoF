#include <iostream>
#include "forma.hpp"

int main() {
    RenderizadorVetorial vetorial;
    RenderizadorRaster raster;
    RenderizadorTranscendeAMateria demiurgo;

    Circulo c1(vetorial, 5.0);
    Circulo c2(raster, 5.0);
    Quadrado q1(vetorial, 3.0);
    Quadrado q2(demiurgo, 999999);

    std::cout << c1.desenhar() << std::endl;
    std::cout << c2.desenhar() << std::endl;
    std::cout << q1.desenhar() << std::endl;
    std::cout << q2.desenhar() << std::endl;

    return 0;
}