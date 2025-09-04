#include "guerreiro.h"
#include <iostream>

// Construtor: delega inicialização à classe base Personagem
Guerreiro::Guerreiro(const std::string& nome, int vida)
    : Personagem(nome, vida) {
        // Corpo vazio, pois tudo é inicializado na lista de inicialização
    }

// Implementação do método atacar específico para Guerreiro
void Guerreiro::atacar() {
    std::cout << nome << " golpeia com a espada!" << std::endl;
}