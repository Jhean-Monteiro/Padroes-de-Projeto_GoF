#include "imagem.hpp"
#include <iostream>

Imagem::~Imagem() {}

ImagemReal::ImagemReal(const std::string& arquivo) : arquivo_(arquivo) {
    carrregarDoDisco();
}

void ImagemReal::carrregarDoDisco() const {
    std::cout << "Carregando " << arquivo_ << " do disco (operacao pesada)..." << std::endl;
}

void ImagemReal::exibir() const {
    std::cout << "Exibindo " << arquivo_ << std::endl;
}