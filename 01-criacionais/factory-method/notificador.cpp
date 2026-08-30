#include "notificador.hpp"
#include <iostream>

Notificador::~Notificador() {}

void Notificador::notificar(const std::string& mensagem) const {
    std::unique_ptr<Notificacao> notificacao = criarNotificacao();
    notificacao->enviar(mensagem);
}


std::unique_ptr<Notificacao> NotificadorEmail::criarNotificacao() const {
    return std::make_unique<NotificacaoEmail>();
}

std::unique_ptr<Notificacao> NotificadorSMS::criarNotificacao() const {
    return std::make_unique<NotificacaoSMS>();
}