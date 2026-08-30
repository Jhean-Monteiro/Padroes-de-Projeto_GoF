#include <iostream>
#include <memory>
#include "notificador.hpp"

int main() {
    std::unique_ptr<Notificador> notificadorEmail = std::make_unique<NotificadorEmail>();
    notificadorEmail->notificar("Sua fatura chegou!");

    std::unique_ptr<Notificador> notificadorSMS = std::make_unique<NotificadorSMS>();
    notificadorSMS->notificar("Seu código de verificação é 1234");

    return 0;
}