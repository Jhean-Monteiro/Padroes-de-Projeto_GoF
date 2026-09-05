#include "decorador_cafe.hpp"

DecoradorCafe::DecoradorCafe(std::unique_ptr<Cafe> cafe) : cafe_(std::move(cafe)) {}


ComLeite::ComLeite(std::unique_ptr<Cafe> cafe) : DecoradorCafe(std::move(cafe)) {}

double ComLeite::custo() const { return cafe_->custo() + 1.5; }

std::string ComLeite::descricao() const { return cafe_->descricao() + " + leite"; }



ComChantilly::ComChantilly(std::unique_ptr<Cafe> cafe) : DecoradorCafe(std::move(cafe)) {}

double ComChantilly::custo() const { return cafe_->custo() + 2.0; }
std::string ComChantilly::descricao() const { return cafe_->descricao() + " + chantilly"; }