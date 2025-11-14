//
// Created by LENOVO on 28/10/2025.
//

#ifndef MUNDO_H
#define MUNDO_H

#include <vector>
#include <iostream>
#include "Criatura.h"
#include "Raiz.h"
#include "Centella.h"
#include "Metamorfitas.h"
#include "Albo.h"

class Mundo {
    std::vector<Criatura*> mundo;
public:
    Mundo();
    ~Mundo();
    void inicializar();
    void mostrar() const;
    void ciclo();
};

#endif
