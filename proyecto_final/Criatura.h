//
// Created by LENOVO on 28/10/2025.
//

#ifndef CRIATURA_H
#define CRIATURA_H

#include <vector>

static const int TAM_MUNDO = 15; // Ahora sin constexpr, como pediste

class Criatura {
public:
    virtual char simbolo() const = 0;
    virtual void mover(std::vector<Criatura*>& mundo, int pos) = 0;
    virtual ~Criatura() {}
};

#endif
