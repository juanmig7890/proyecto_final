//
// Created by LENOVO on 28/10/2025.
//

#include "Mundo.h"
#include <cstdlib>

Mundo::Mundo() : mundo(TAM_MUNDO, nullptr) {}

Mundo::~Mundo() {
    for (auto c : mundo)
        delete c;
}

void Mundo::inicializar() {
    int pos = rand() % TAM_MUNDO;
    mundo[pos] = new Raiz();

    do pos = rand() % TAM_MUNDO; while (mundo[pos]);
    mundo[pos] = new Centella();

    do pos = rand() % TAM_MUNDO; while (mundo[pos]);
    mundo[pos] = new Metamorfitas(rand() % 2);

    do pos = rand() % TAM_MUNDO; while (mundo[pos]);
    mundo[pos] = new Albo();
}

void Mundo::mostrar() const {
    std::cout << "[";
    for (int i = 0; i < TAM_MUNDO; ++i) {
        if (mundo[i])
            std::cout << mundo[i]->simbolo();
        else
            std::cout << "_";
        if (i < TAM_MUNDO - 1) std::cout << " ";
    }
    std::cout << "]\n";
}

void Mundo::ciclo() {
    auto estadoActual = mundo;
    for (int i = 0; i < TAM_MUNDO; ++i)
        if (estadoActual[i])
            estadoActual[i]->mover(mundo, i);
}
