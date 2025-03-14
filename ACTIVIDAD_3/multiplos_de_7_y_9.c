#include <stdio.h>

int main() {
    int contador = 0;

    while (contador <= 1000) {
        if (contador % 7 == 0 || contador % 9 == 0) // Múltiplos de 7 y 9
        {
            printf("Número: %d\n", contador);
        }
        contador++; // Incremento en cada iteración
    }

    return 0;
}
