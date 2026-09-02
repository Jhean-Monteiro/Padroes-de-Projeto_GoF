#pragma once
#include <memory>
#include <string>

class Forma {
    public:
        virtual ~Forma();
        virtual std::unique_ptr<Forma> clone() const = 0;
        virtual std::string descricao() const = 0;
};

class Circulo : public Forma {
    public:
        Circulo(double raio, const std::string& cor);

        std::unique_ptr<Forma> clone() const override;
        std::string descricao() const override;
        
    private:
        double raio_;
        std::string cor_;
};

class Retangulo : public Forma {
    public:
        Retangulo(double largura, double altura, const std::string& cor);

        std::unique_ptr<Forma> clone() const override;
        std::string descricao() const override;

    private:
        double largura_;
        double altura_;
        std::string cor_;
};