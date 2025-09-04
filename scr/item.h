#ifndef ITEM_H
#define ITEM_H

#include <string>
//Classe que representa um item simples no inventario
class Item {
    std::string nome; // Nome do item

public: //Construtor e metodo publicos
    Item(const std::string& nome);

    std::string getNome() const; // Retorna o nome do item

};

#endif