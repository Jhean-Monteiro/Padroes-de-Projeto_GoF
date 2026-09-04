#include "arquivo.hpp"

Arquivo::Arquivo(const std::string& nome, int tamanho) : nome_(nome), tamanho_(tamanho) {}
int Arquivo::tamanho() const {return tamanho_;}
std::string Arquivo::nome() const {return nome_;}