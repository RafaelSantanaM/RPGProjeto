#include "inventario.h"
#include <iostream>

Inventario::~Inventario() {
    for(Item* item : itens) { //Estrutura que me lembrou o for de python para listas. usado de forma parecida para percorrer os elementos dentro do vetor.(Nesse caso é um vetor de ponteiros).
        delete item; //libera espaço na memoria para nao haver vazamento de memoria.
        // O for percorre cara item dentro do inventario e deleta cada um.
    }
}

void Inventario::adicionarItem(Item* item) {
    itens.push_back(item); //adiciona o item `item` ao final do vetor `itens`.
}

void Inventario::listarItens() const {
    std::cout << "Itens no inventário:" << std::endl;
    for(const Item* item : itens) { //Percorre cada item dentro do vetor itens.
        std::cout << "- " << item->getNome() << std::endl; //Usa a seta -> para acessar o metodo getNome() do objeto apontado pelo ponteiro item.}
    }
}