#include "proxy_imagem.hpp"

ProxyImagem::ProxyImagem(const std::string& arquivo) : arquivo_(arquivo) {}

void ProxyImagem::exibir() const {
    if (!ImagemReal_) {
        ImagemReal_ = std::make_unique<ImagemReal>(arquivo_);
    }
    ImagemReal_->exibir();
}