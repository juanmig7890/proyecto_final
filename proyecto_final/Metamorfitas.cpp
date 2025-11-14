//
// Created by LENOVO on 28/10/2025.
//

#include "Metamorfitas.h"

Metamorfitas::Metamorfitas(bool dir) : derecha(dir) {}

char Metamorfitas::simbolo() const { return 'M'; }

void Metamorfitas::mover(std::vector<Criatura*>& mundo, int pos) {
    int nuevaPos = pos + (derecha ? 1 : -1);

    if (nuevaPos < 0 || nuevaPos >= TAM_MUNDO) {
        derecha = !derecha;
        nuevaPos = pos + (derecha ? 1 : -1);
    }

    while (nuevaPos >= 0 && nuevaPos < TAM_MUNDO && mundo[nuevaPos]) {
        nuevaPos += (derecha ? 1 : -1);
    }

    if (nuevaPos >= 0 && nuevaPos < TAM_MUNDO) {
        mundo[nuevaPos] = mundo[pos];
        mundo[pos] = nullptr;
    }
}
