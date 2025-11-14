//
// Created by LENOVO on 28/10/2025.
//

#include "Centella.h"
#include <cstdlib>

char Centella::simbolo() const { return 'C'; }

void Centella::volar() {
    // No hace nada aquí directamente, solo definimos el sentido:
    // volar = moverse libremente ignorando distancias.
}

void Centella::mover(std::vector<Criatura*>& mundo, int pos) {
    volar(); // <- usamos la habilidad especial

    int nuevaPos = rand() % TAM_MUNDO;

    if (!mundo[nuevaPos]) {
        mundo[nuevaPos] = mundo[pos];
        mundo[pos] = nullptr;
    }
}
