#pragma once
#include <string>

class Notificacao {
    public:
        virtual ~Notificacao();
        virtual void enviar(const std::string& mensagem) const = 0;
};

class NotificacaoEmail : public Notificacao {
    public:
        void enviar(const std::string& mensagem) const override;
};

class NotificacaoSMS : public Notificacao {
    public:
        void enviar(const std::string& mensagem) const override;
};