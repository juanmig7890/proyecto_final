#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Mundo.h"
#include "json.hpp"



int main() {
    srand(time(0));

    Mundo mundo;
    mundo.inicializar();

    int ciclos;
    std::cout << "ciclos quieres simular? ";
    std::cin >> ciclos;

    for (int c = 1; c <= ciclos; ++c) {
        std::cout << "\nCiclo " << c << ":\n";
        mundo.mostrar();
        mundo.ciclo();
    }

    std::cout << "\nEstado final del mundo:\n";
    mundo.mostrar();
    std::cout << "Simulación finalizada.\n";

    return 0;
}
