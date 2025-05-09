#include <stdio.h>

int main() {
    int contador, r1, r2;
    
    // Pedir al usuario el rango de números
    printf("Ingresa desde qué número quieres comenzar: ");
    scanf("%d", &r1);
    printf("Ingresa hasta qué número quieres ir: ");
    scanf("%d", &r2);
    
    contador = r1; // Iniciar el contador en el primer número del rango

    while (contador <= r2) {
        if (contador % 3 == 0 && contador % 5 == 0) {
            printf("Buzz Biss\n");
        }
        else if (contador % 5 == 0) {
            printf("Buzz\n");
        }
        else if (contador % 3 == 0) {
            printf("Biss\n");
        }
        else {
            printf("Número: %d\n", contador);
        }
        contador++; // Incremento en cada iteración
    }

    return 0;
}