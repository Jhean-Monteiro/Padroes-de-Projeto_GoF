#pragma once

class EstrategiaFrete {
    public:
        virtual ~EstrategiaFrete();
        virtual double calcular(double pesoKg) const = 0;
};

class FreteSedex : public EstrategiaFrete {
    public:
        double calcular(double pesoKg) const override;
};

class FretePac : public EstrategiaFrete {
    public:
        double calcular(double pesoKg) const override;
};

class FreteGratis : public EstrategiaFrete {
    public:
        double calcular(double pesoKg) const override;
};