#include <iostream>
#include "proxy_imagem.hpp"

int main() {
    std::cout << "Proxy criado, imagem ainda nao carregada." << std::endl;
    ProxyImagem imagem("foto.png");

    std::cout << "Chamando exibir() pela primeira vez:" << std::endl;
    imagem.exibir();

    std::cout << "Chamando exibir() de novo:" << std::endl;
    imagem.exibir();

    return 0;
}