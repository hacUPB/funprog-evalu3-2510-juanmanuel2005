#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int opcion;

    // Bucle do-while que repite el menú hasta que el usuario elija salir
    do {
        // Mostrar el menú de opciones con un salto de línea antes del menú
        printf("\nSelecciona una operacion:\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Ingresa el número de la opción que deseas: ");
        scanf("%d", &opcion);

        // Si la opción no es 5, pedimos los números
        if (opcion != 5) {
            // Espacio entre el menú y los números pedidos
            printf("\n");
            printf("Ingresa el primer número: ");
            scanf("%f", &num1);
            printf("Ingresa el segundo número: ");
            scanf("%f", &num2);

            // Espacio entre los números pedidos y el resultado
            printf("\n");
        }

        // Usamos un solo switch para manejar las operaciones
        switch (opcion) {
            case 1:  // Opción para sumar
                resultado = num1 + num2;
                printf("El resultado es: %f\n", resultado);
                break;

            case 2:  // Opción para restar
                resultado = num1 - num2;
                printf("El resultado es: %f\n", resultado);
                break;

            case 3:  // Opción para multiplicar
                resultado = num1 * num2;
                printf("El resultado es: %f\n", resultado);
                break;

            case 4:  // Opción para dividir
                if (num2 == 0) {  // Verificamos si el divisor es 0
                    printf("Error: No se puede dividir entre 0.\n");
                } else {
                    resultado = num1 / num2;
                    printf("El resultado es: %f\n", resultado);
                }
                break;

            case 5:  // Opción para salir
                printf("Saliendo del programa...\n");
                break;

            default:  // Opción no válida
                printf("Opción no válida. Por favor, elige una opción entre 1 y 5.\n");
                break;
        }

    } while (opcion != 5);  // El bucle se repite hasta que el usuario elige salir

    return 0;
}
