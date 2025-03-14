#include <stdio.h>

int main() {
    int contador = 100;

    while (contador >= -200) {
        if (contador % 2 != 0)
        {
            printf("Iteración: %d\n", contador);
            contador--;
        }
        else {
            contador--; // Asegurar decremento en cada iteración
        }
    }

    return 0;
}
