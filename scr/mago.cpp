#include "mago.h"
#include <iostream>

Mago::Mago(const std::string& nome, int vida)
    : Personagem(nome, vida) {}

void Mago::atacar() {
    std::cout << nome << " lança umfeitiço!" << std::endl;
}

