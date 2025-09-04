#ifndef MAGO_H
#define MAGO_H

#include "personagem.h"

class Mago : public Personagem { //indica que Mago herda de Personagem
    public:
        Mago(const std::string& nome, int vida);
        void atacar() override;
};
#endif