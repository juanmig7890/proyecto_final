//
// Created by LENOVO on 28/10/2025.
//

#ifndef METAMORFITAS_H
#define METAMORFITAS_H

#include "Criatura.h"

class Metamorfitas : public Criatura {
    bool derecha;
public:
    Metamorfitas(bool dir);
    char simbolo() const override;
    void mover(std::vector<Criatura*>& mundo, int pos) override;
};

#endif
