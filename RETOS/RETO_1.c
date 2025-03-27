#include <stdio.h>
#include <math.h>
 
int main() {
    //float num1, num2, resultado;
    int opcion;
    // Bucle do-while que repite el menú hasta que el usuario elija salir
    do {
        // Mostrar el menú de opciones con un salto de línea antes del menú
        printf("Bienvenido a la Calculadora de Ingeniería\n")
        printf("Por favor, selecciona una opción:\n");
        printf("1. Calcular Ley de Ohm\n");
        printf("2. Calcular Factor de Potencia\n");
        printf("3. Calcular Resistencia de un Conductor\n");
        printf("4. Calcular Valor de la Resistencia para un LED\n");
        printf("5. Salir\n");
        printf("Ingresa el número de la opción que deseas: ");
        scanf("%d", &opcion);

 

        // Usamos un solo switch para manejar las operaciones
        switch (opcion) {
            case 1:  // Opción para ley de Ohm
                 float Voltaje, Resistencia, Corriente;
                 int submenu;
    do {
        // Mostrar el menú de opciones para ley de Ohm 
        printf("Has seleccionado calcular la Ley de Ohm.\n")
        printf("¿Qué parámetro deseas calcular?\n");
        printf("1. Calcular Tensión (Voltaje)\n");
        printf("2. Calcular Corriente\n");
        printf("3. Calcular Resistencia\n");
        printf("4. Volver al menú principal\n");
        printf("Ingresa el número de la opción que deseas: ");
        scanf("%d", &submenu);
    switch (submenu) {
        case 1: // opcion para calcular Voltaje
            printf("\n");
            printf("Ingresa la Corriente: ");
            scanf("%f", &Corriente);
            printf("Ingresa la Resistencia: ");
            scanf("%f", &Resistencia);
            printf("\n");
        Voltaje = Corriente * Resistencia
        printf("El Voltaje es: %f\n", Voltaje);
                break;
        case 2: // opcion para calcular Corriente
            printf("\n");
            printf("Ingresa la Voltaje: ");
            scanf("%f", &Voltaje);
            printf("Ingresa la Resistencia: ");
            scanf("%f", &Resistencia);
            printf("\n");
        Corriente = Voltaje / Resistencia
        printf("La Corriente es: %f\n", Corriente);
                break;
        case 3: // opcion para calcular Resistencia
            printf("\n");
            printf("Ingresa la Voltaje: ");
            scanf("%f", &Voltaje);
            printf("Ingresa la Corriente: ");
            scanf("%f", &Corriente);
            printf("\n");
        Resistencia = Voltaje / Corriente
        printf("La Resistencia es: %f\n", Resistencia);
                break;   
            case 4:  // Opción para volver
                printf("Volviendo al menú principal\n");
                break;
            default:  // Opción no válida
                printf("Opción no válida. Por favor, elige una opción entre 1 y 4.\n");
                break;
        }while (opcion != 4);
    }
                break;
            case 2:  // Factor de Potencia
                 double Aparente, Activa, Factor, Voltaje, Corriente, Angulo, Coseno;
                 int submenu;
    do {
        // Mostrar el menú de opciones para ley de Ohm 
        printf("Has seleccionado calcular la Ley de Ohm.\n")
        printf("¿Qué parámetro deseas calcular?\n");
        printf("1. Calcular Potencia Aparente\n");
        printf("2. Calcular Potencia Activa\n");
        printf("3. Calcular Factor de Potencia\n");
        printf("4. Volver al menú principal\n");
        printf("Ingresa el número de la opción que deseas: ");
        scanf("%d", &submenu);
    switch (submenu) {
        case 1: // opcion para calcular Voltaje
            printf("\n");
            printf("Ingresa la Corriente: ");
            scanf("%f", &Corriente);
            printf("Ingresa la Resistencia: ");
            scanf("%f", &Resistencia);
            printf("\n");
        Voltaje = Corriente * Resistencia
        printf("El Voltaje es: %f\n", Voltaje);
                break;
        case 2: // opcion para calcular Corriente
            printf("\n");
            printf("Ingresa la Voltaje: ");
            scanf("%f", &Voltaje);
            printf("Ingresa la Resistencia: ");
            scanf("%f", &Resistencia);
            printf("\n");
        Corriente = Voltaje / Resistencia
        printf("El Voltaje es: %f\n", Corriente);
                break;
        case 3: // opcion para calcular Resistencia
            printf("\n");
            printf("Ingresa la Voltaje: ");
            scanf("%f", &Voltaje);
            printf("Ingresa la Corriente: ");
            scanf("%f", &Corriente);
            printf("\n");
        Resistencia = Voltaje / Corriente
        printf("El Voltaje es: %f\n", Resistencia);
                break;   
            case 4:  // Opción para volver
                printf("Volviendo al menú principal\n");
                break;
            default:  // Opción no válida
                printf("Opción no válida. Por favor, elige una opción entre 1 y 4.\n");
                break;
        }while (opcion != 4);
    }
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