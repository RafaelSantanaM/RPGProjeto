#ifndef GUERREIRO_H //previne inclusões múltiplas do mesmo arquivo
#define GUERREIRO_H //Define o símbolo GUERREIRO_H para indicar que o arquivo foi incluído

#include "personagem.h" // Inclui o arquivo de cabeçalho personagem.h
#include <iostream> // Inclui a biblioteca iostream para usar std::cout

class Guerreiro : public Personagem { //Declara  a classe Guerreiro que herda a Personagem 
    public: // Membros publicos, acessiveis de qualquer lugar
        Guerreiro(const std::string& nome, int vida); //construtor: apenas encaminha para o construtor da classe base
        void atacar() override; // Implementação especifica do ataque de um guerreiro.
    };

#endif // Fim da diretiva de inclusão múltipla