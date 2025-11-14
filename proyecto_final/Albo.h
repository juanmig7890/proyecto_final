//
// Created by LENOVO on 28/10/2025.
//

#ifndef ALBO_H
#define ALBO_H

#include "Criatura.h"

class Albo : public Criatura {
public:
    char simbolo() const override;
    void mover(std::vector<Criatura*>& mundo, int pos) override;
};

#endif
