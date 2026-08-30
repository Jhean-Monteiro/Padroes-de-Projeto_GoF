#pragma once
#include "notificacao.hpp"
#include <string>
#include <memory>

class Notificador {
    public:
        virtual ~Notificador();

        // O "template method": lógica comum que usa o factory method
        void notificar(const std::string& mensagem) const;

    protected:
        // O FACTORY METHOD propriamente dito
        virtual std::unique_ptr<Notificacao> criarNotificacao() const = 0;
};


class NotificadorEmail : public Notificador {
    protected:
        std::unique_ptr<Notificacao> criarNotificacao() const override;
};

class NotificadorSMS : public Notificador {
    protected:
        std::unique_ptr<Notificacao> criarNotificacao() const override;
};