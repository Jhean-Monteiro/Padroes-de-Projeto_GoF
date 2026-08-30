#include <iostream>
#include "singleton.hpp"

int main() {
    Singleton& s1 = Singleton::getInstance();
    std::cout << "s1 -> " << s1.getValor() << std::endl;

    s1.setValor("valor alterado por s1");

    Singleton& s2 = Singleton::getInstance();
    std::cout << "s2 -> " << s2.getValor() << std::endl;

    std::cout << "Endereco de s1: " << &s1 << std::endl;
    std::cout << "Endereco de s2: " << &s2 << std::endl;

    return 0;
}