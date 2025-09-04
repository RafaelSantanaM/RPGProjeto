#include "personagem.h" // Inclui o arquivo de cabeçalho personagem.h
/* Usamos o `#include` igual usamos para as bibliotecas, mas com as aspas.*/
#include <iostream> // Inclui a biblioteca iostream para usar std::cout

Personagem::Personagem(const std::string& nome, int vida)
    : nome(nome), vida(vida){ //inicializa os atributos diretamente.
        //corpo vazio, pois tudo já foi inicializado diretamente.
    }

// Destrutor da classe Personagem
Personagem::~Personagem(){
    std::cout << "Destruindo Personagem..." << std::endl;
}

//Retorna o nome do personagem
std::string Personagem::getNome() const { /*O `std::string` indica que a função deve
    retornar um objeto do tipo string. `Personagem::getNome()` segue a estrutura
    padrao de `Classe::método() {  }`. E o const foi usado ali para indicar que essa
    função não altera nenhum atributo da classe.*/
    return nome;
}

int Personagem::getVida() const {
    return vida;
}

