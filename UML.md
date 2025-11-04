classDiagram
    direction LR

    class Mundo {
        - vector<Criatura*> mundo
        + Mundo()
        + ~Mundo()
        + inicializar()
        + mostrar() const
        + ciclo()
    }

    class Criatura {
        <<abstract>>
        + simbolo() const*
        + mover(vector<Criatura*>& mundo, int pos)*
    }

    class Raiz {
        + simbolo() const
        + mover(vector<Criatura*>& mundo, int pos)
    }

    class Centella {
        + simbolo() const
        + mover(vector<Criatura*>& mundo, int pos)
    }

    class Metamorfitas {
        - estado : bool
        + simbolo() const
        + mover(vector<Criatura*>& mundo, int pos)
    }

    class Albo {
        + simbolo() const
        + mover(vector<Criatura*>& mundo, int pos)
    }

    class Volador {
        <<interface>>
        + saltarAleatorio(int pos, int tam) : int
    }

    %% Herencias
    Criatura <|-- Raiz
    Criatura <|-- Centella
    Criatura <|-- Metamorfitas
    Criatura <|-- Albo

    %% Herencia múltiple
    Volador <|.. Centella

    %% Relaciones
    Mundo "1" *-- "0..*" Criatura : contiene
