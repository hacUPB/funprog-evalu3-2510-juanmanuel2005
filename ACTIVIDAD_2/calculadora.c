#include <stdio.h>

int main() {
    float num1, num2, resultado;
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

    // Usamos switch y case para manejar las operaciones
    switch (opcion) {
        case 1:  // Opción para sumar
            resultado = num1 + num2;
            break;
        case 2:  // Opción para restar
            resultado = num1 - num2;
            break;
        case 3:  // Opción para multiplicar
            resultado = num1 * num2;
            break;
        case 4:  // Opción para dividir
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Error: No se puede dividir entre 0.\n");
                return 1;  // Salir del programa si hay un error
            }
            break;
        default:  // Opción no válida
            printf("Opción no válida. Por favor, elige una opción entre 1 y 4.\n");
            return 1;  // Salir del programa si la opción no es válida
    }

    // Imprimir el resultado de la operación
    printf("El resultado es: %f\n", resultado);

    return 0;
}
