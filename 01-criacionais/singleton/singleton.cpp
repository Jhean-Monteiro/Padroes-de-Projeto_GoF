#include "singleton.hpp"

// getInstance: cria a instancia única na primeira chamada, e
// devolve essa mesma instância nas chamadas seguintes
Singleton& Singleton::getInstance() {
    static Singleton instancia;
    return instancia;
}

// construtor: roda uma única vez, quando a instância é criada
Singleton::Singleton() {
    valor_ = "valor padrão";
}

// setValor: altera o atributo interno valor_
void Singleton::setValor(const std::string& v) {
    valor_ = v;
}

// getValor apenas lê e devolve 
std::string Singleton::getValor() const {
    return valor_;
}