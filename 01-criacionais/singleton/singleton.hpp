#pragma once
#include <string>

class Singleton {
    public:
        static Singleton& getInstance(); // ponto de acesso global

        // impede cópia e atribuição
        Singleton(const Singleton&) = delete;
        Singleton& operator=(const Singleton&) = delete;

        // Exemplo de estado/comportamento
        void setValor(const std::string& v);
        std::string getValor() const;

    private:
        Singleton();
        std::string valor_;
};