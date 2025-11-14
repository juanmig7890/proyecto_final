//
// Created by LENOVO on 28/10/2025.
//

#include "Albo.h"
#include <cstdlib>

char Albo::simbolo() const { return 'A'; }

void Albo::mover(std::vector<Criatura*>& mundo, int pos) {
    int dir = (rand() % 2 == 0) ? -1 : 1;
    int nuevaPos = pos + dir;

    if (nuevaPos >= 0 && nuevaPos < TAM_MUNDO && !mundo[nuevaPos]) {
        mundo[nuevaPos] = mundo[pos];
        mundo[pos] = nullptr;
    }

    if (rand() % 5 == 0) {
        int copiaPos = rand() % TAM_MUNDO;
        if (!mundo[copiaPos]) {
            mundo[copiaPos] = new Albo();
        }
    }
}
