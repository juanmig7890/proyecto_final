//
// Created by LENOVO on 28/10/2025.
//

#ifndef CENTELLA_H
#define CENTELLA_H

#include "Criatura.h"
#include "Volador.h"

class Centella : public Criatura, public Volador{
public:
    char simbolo() const override;
    void mover(std::vector<Criatura*>& mundo, int pos) override;
    void volar() override;
};

#endif
