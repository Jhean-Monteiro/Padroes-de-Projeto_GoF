#pragma once
#include <string>
#include <vector>

class Pizza {
    public:
        void setTamanho(const std::string& tamanho);
        void setMassa(const std::string& massa);
        void adicionarIngrediente(const std::string& ingrediente);

        std::string descricao() const;

    private:
        std::string tamanho_;
        std::string massa_;
        std::vector<std::string> ingredientes_;
};


