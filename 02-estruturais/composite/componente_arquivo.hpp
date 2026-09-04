#pragma once
#include <string>

class ComponenteArquivo {
    public:
        virtual ~ComponenteArquivo();
        virtual int tamanho() const = 0;
        virtual std::string nome() const = 0;
};