# proyecto_final
proyecto final del curso POO: programacion orientada a objetos.
en este proyecto final se van a encontrar muchas dinamicas y tematicas de la programacion orientada a objetos desde crear nuevas clases y que cada clase tenga su objeto, hasta conceptos mas complejos como polimorfismo y herencia multiple, este proyecto en concreto trata de un mundo que esta limitado a 15 espacios, en este mundo existen diferentes criaturas, RAIZ que siempre conserva su misma posición, CENTELLA que es una especie voladora que elige aleatoriamente su posicion en el mundo, METAMORFITAS que se mueven un espacio a la direccion que van pero si tratan de salirse del mundo inmediatamente cambian de dirección, y por ultimo los ALBOS se mueve aleatoriamente una casilla hacia la derecha o a la izquierda solo si esta libre y ademas tiene un 20% de probabilidad de reproducirse.

estas clases heredan de una clase madre llamada Criatura, la cual se encarga de heredar los metodos virtuales que vana tener todas las criaturas, y ademas tenemos una clase mundo que tiene un vector apuntando a la clase de criaturas para poder utilizar todas las criaturas creadas, este mundo es el lugar donde van a ocurrir todos los movimientos de las criaturas, el encargado de mostrar e inicializar las criaturas.


