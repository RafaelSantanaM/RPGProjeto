#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "item.h" 
#include <vector> //usado para armazenar varios itens
#include <memory> //usado para implementação de smart pointers no futuro

class Inventario {
    //vetor de ponteiros brutos para itens
    // usamos ponteiros para praticar new/delete
    std::vector<Item*> itens; 

    public:
    ~Inventario(); //destrutor para liberar memoria
    void adicionarItem(Item* item); 
    void listarItens() const; //lista todos os itens
};


#endif