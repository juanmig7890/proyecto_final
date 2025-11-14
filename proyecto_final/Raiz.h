//
// Created by LENOVO on 28/10/2025.
//

#ifndef RAIZ_H
#define RAIZ_H

#include "Criatura.h"

class Raiz : public Criatura {
public:
    char simbolo() const override;
    void mover(std::vector<Criatura*>&, int) override;
};

#endif
