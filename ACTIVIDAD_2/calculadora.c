#include <stdio.h>

int main() {
    float num1, num2;
    int opcion;

    // Mostrar el menú de opciones
    printf("Selecciona una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Ingresa el número de la opción que deseas: ");
    scanf("%d", &opcion);

    // Pedir los dos números
    printf("Ingresa el primer número: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo número: ");
    scanf("%f", &num2);

    // Realizar la operación según la opción seleccionada
    if (opcion == 1) {
        printf("El resultado de %.2f + %.2f es: %.2f\n", num1, num2, num1 + num2);
    } 
    else if (opcion == 2) {
        printf("El resultado de %.2f - %.2f es: %.2f\n", num1, num2, num1 - num2);
    }
    else if (opcion == 3) {
        printf("El resultado de %.2f * %.2f es: %.2f\n", num1, num2, num1 * num2);
    }
    else if (opcion == 4) {
        if (num2 != 0) {
            printf("El resultado de %.2f / %.2f es: %.2f\n", num1, num2, num1 / num2);
        } else {
            printf("Error: No se puede dividir entre 0.\n");
        }
    } 
    else {
        printf("Opción no válida. Por favor, elige una opción entre 1 y 4.\n");
    }

    return 0;
}
