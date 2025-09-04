#include "item.h"

Item::Item(const std::string& nome) : nome(nome) {}

// Getter: Retorna o nome do item
std::string Item::getNome() const {
    return nome;
}

