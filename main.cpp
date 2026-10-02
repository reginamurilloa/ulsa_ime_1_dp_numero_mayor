// Práctica 5: El mayor de tres números
// Traduce TU receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque, con la numeración de TU receta.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué función de utilerias.h vas a usar? ¿Por qué esa y no la otra?
#include "utilerias.h"

int main() {
    double numero1 = 0.0;
    double numero2 = 0.0;
    double numero3 = 0.0;

    // Paso 1
    std::cout << "Bienvenido a mi programa\n";

    // Paso 2
    numero1 = leerDecimal("Escribe el primer número: ");
    while (numero1 < 0) {
        std::cout << "No se aceptan números negativos. Intenta de nuevo.\n";
        numero1 = leerDecimal("Escribe el primer número: ");
    }

    // Paso 3
    numero2 = leerDecimal("Escribe el segundo número: ");
    while (numero2 < 0) {
        std::cout << "No se aceptan números negativos. Intenta de nuevo.\n";
        numero2 = leerDecimal("Escribe el segundo número: ");
    }

    // Paso 4
    numero3 = leerDecimal("Escribe el tercer número: ");
    while (numero3 < 0) {
        std::cout << "No se aceptan números negativos. Intenta de nuevo.\n";
        numero3 = leerDecimal("Escribe el tercer número: ");
    }
    int opcion = 0;

    // Paso 5
    if (numero1 > numero2 && numero1 > numero3) {
        opcion = 1;
    }
    else if (numero2 > numero1 && numero2 > numero3) {
        opcion = 2;
    }
    else if (numero3 > numero1 && numero3 > numero2) {
        opcion = 3;
    }
    else {
        opcion = 4;
    }

    // Paso 6
    switch (opcion) {
        case 1:
            std::cout << "El número mayor es: " << numero1 << '\n';
            break;
        case 2:
            std::cout << "El número mayor es: " << numero2 << '\n';
            break;
        case 3:
            std::cout << "El número mayor es: " << numero3 << '\n';
            break;
        case 4:
            std::cout << "Hay empate en el valor mayor. No se acepta.\n";
            break;
        default:
            std::cout << "Opción no válida.\n";
            break;
    }

    return 0;
}