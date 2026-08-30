#include "notificacao.hpp"
#include <iostream>

Notificacao::~Notificacao() {}

void NotificacaoEmail::enviar(const std::string& mensagem) const {
    std::cout << "E-MAIL Enviando: " << mensagem << std::endl;
}

void NotificacaoSMS::enviar(const std::string& mensagem) const {
    std::cout << "SMS Enviando: " << mensagem << std::endl;
}
