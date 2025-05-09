#include <stdio.h>
#include <math.h>

// Declaración de funciones
int menup(void);
int submenu1(void);
int submenu2(void);
int submenu3(void);
int submenu4(void);

int main() {
    int opcion;

    // Bucle principal
    do {
        opcion = menup();

        switch (opcion) {
            case 1: { // Ley de Ohm
                int opcion1;
                do {
                    opcion1 = submenu1();
                    float Voltaje, Resistencia, Corriente;

                    switch (opcion1) {
                        case 1: // Calcular Voltaje
                            printf("\nIngresa la Corriente: ");
                            scanf("%f", &Corriente);
                            printf("Ingresa la Resistencia: ");
                            scanf("%f", &Resistencia);
                            Voltaje = Corriente * Resistencia;
                            printf("El Voltaje es: %.2f V\n", Voltaje);
                            break;

                        case 2: // Calcular Corriente
                            printf("\nIngresa el Voltaje: ");
                            scanf("%f", &Voltaje);
                            printf("Ingresa la Resistencia: ");
                            scanf("%f", &Resistencia);
                            Corriente = Voltaje / Resistencia;
                            printf("La Corriente es: %.2f A\n", Corriente);
                            break;

                        case 3: // Calcular Resistencia
                            printf("\nIngresa el Voltaje: ");
                            scanf("%f", &Voltaje);
                            printf("Ingresa la Corriente: ");
                            scanf("%f", &Corriente);
                            Resistencia = Voltaje / Corriente;
                            printf("La Resistencia es: %.2f Ω\n", Resistencia);
                            break;

                        case 4:
                            printf("Volviendo al menú principal...\n");
                            break;

                        default:
                            printf("Opción no válida.\n");
                    }
                } while (opcion1 != 4);
                break;
            }

            case 2: { // Factor de Potencia
                int opcion2;
                do {
                    opcion2 = submenu2();
                    float Aparente, Activa, Factor, Voltaje, Corriente, Angulo;

                    switch (opcion2) {
                        case 1: // Calcular Potencia Aparente
                            printf("\nIngresa el Voltaje: ");
                            scanf("%f", &Voltaje);
                            printf("Ingresa la Corriente: ");
                            scanf("%f", &Corriente);
                            Aparente = Voltaje * Corriente;
                            printf("La Potencia Aparente es: %.2f VA\n", Aparente);
                            break;

                        case 2: // Calcular Potencia Activa
                            printf("\nIngresa la Potencia Aparente: ");
                            scanf("%f", &Aparente);
                            printf("Ingresa el Factor de Potencia: ");
                            scanf("%f", &Factor);
                            Activa = Aparente * Factor;
                            printf("La Potencia Activa es: %.2f W\n", Activa);
                            break;

                        case 3: // Calcular Factor de Potencia
                            printf("\nIngresa el Ángulo de Desfase (en grados): ");
                            scanf("%f", &Angulo);
                            Factor = cos(Angulo * M_PI / 180);  // Convertir a radianes
                            printf("El Factor de Potencia es: %.2f\n", Factor);
                            break;

                        case 4:
                            printf("Volviendo al menú principal...\n");
                            break;

                        default:
                            printf("Opción no válida.\n");
                    }
                } while (opcion2 != 4);
                break;
            }

            case 3: { // Resistencia de un Conductor
                int opcion3;
                do {
                    opcion3 = submenu3();
                    float Resistividad, Longitud, Area, Resistencia;

                    switch (opcion3) {
    case 1: { // Calcular Resistencia de un Conductor
        int material;
        float coefTemp, resistividad20, temperatura, resistencia20, resistenciaT;
        const float T0 = 20.0; // Temperatura de referencia en °C

        printf("\nSelecciona el material del conductor:\n");
        printf("1. Oro\n2. Aluminio\n3. Cobre\n4. Otro\n");
        printf("Selecciona una opción: ");
        scanf("%d", &material);

        switch (material) {
            case 1: // Oro
                coefTemp = 0.0034;
                resistividad20 = 2.44e-8;
                break;
            case 2: // Aluminio
                coefTemp = 0.0040;
                resistividad20 = 2.82e-8;
                break;
            case 3: // Cobre
                coefTemp = 0.00393;
                resistividad20 = 1.68e-8;
                break;
            case 4: // Otro material
                printf("\nIngresa el Coeficiente de Temperatura del material: ");
                scanf("%f", &coefTemp);
                printf("Ingresa la Resistividad a 20°C (Ω·m): ");
                scanf("%f", &resistividad20);
                break;
            default:
                printf("Opción no válida. Volviendo al menú.\n");
                break;
        }

        // Si la opción es válida, continuar con el cálculo
        if (material >= 1 && material <= 4) {
            printf("\nIngresa la Longitud del conductor (m): ");
            scanf("%f", &Longitud);
            printf("Ingresa el Área de la sección transversal (m²): ");
            scanf("%f", &Area);
            printf("Ingresa la Temperatura final del conductor (°C): ");
            scanf("%f", &temperatura);

            if (Area > 0) {
                resistencia20 = (resistividad20 * Longitud) / Area;
                resistenciaT = resistencia20 * (1 + coefTemp * (temperatura - T0));

                printf("La Resistencia del conductor a %.2f°C es: %.6f Ω\n", temperatura, resistenciaT);
            } else {
                printf("Error: El área debe ser mayor que cero.\n");
            }
        }
        break;
    }

    case 2:
        printf("Volviendo al menú principal...\n");
        break;

    default:
        printf("Opción no válida.\n");
}


                } while (opcion3 != 2);
                break;
            }

            case 4: { // Resistencia para un LED
                int opcion4;
                do {
                    opcion4 = submenu4();
                    float VoltajeFuente, VoltajeLED, CorrienteLED, Resistencia;

                    switch (opcion4) {
                        case 1: // Calcular Resistencia para un LED
                            printf("\nIngresa el Voltaje de la fuente (V): ");
                            scanf("%f", &VoltajeFuente);
                            printf("Ingresa el Voltaje del LED (V): ");
                            scanf("%f", &VoltajeLED);
                            printf("Ingresa la Corriente del LED (A): ");
                            scanf("%f", &CorrienteLED);
                            Resistencia = (VoltajeFuente - VoltajeLED) / CorrienteLED;
                            printf("La Resistencia necesaria es: %.2f Ω\n", Resistencia);
                            break;

                        case 2:
                            printf("Volviendo al menú principal...\n");
                            break;

                        default:
                            printf("Opción no válida.\n");
                    }
                } while (opcion4 != 2);
                break;
            }

            case 5:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción no válida. Intenta de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}

// Función del menú principal
int menup(void) {
    int opcion;
    printf("\n--- Calculadora de Ingeniería ---\n");
    printf("1. Calcular Ley de Ohm\n");
    printf("2. Calcular Factor de Potencia\n");
    printf("3. Calcular Resistencia de un Conductor\n");
    printf("4. Calcular Resistencia para un LED\n");
    printf("5. Salir\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);
    return opcion;
}

// Submenús
int submenu1(void) {
    int opcion1;
    printf("\n--- Ley de Ohm ---\n");
    printf("1. Calcular Tensión (Voltaje)\n");
    printf("2. Calcular Corriente\n");
    printf("3. Calcular Resistencia\n");
    printf("4. Volver al menú principal\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion1);
    return opcion1;
}

int submenu2(void) {
    int opcion2;
    printf("\n--- Factor de Potencia ---\n");
    printf("1. Calcular Potencia Aparente\n");
    printf("2. Calcular Potencia Activa\n");
    printf("3. Calcular Factor de Potencia\n");
    printf("4. Volver al menú principal\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion2);
    return opcion2;
}

int submenu3(void) {
    int opcion3;
    printf("\n--- Resistencia de un Conductor ---\n");
    printf("1. Calcular Resistencia del conductor\n");
    printf("2. Volver al menú principal\n");
    printf("Selecciona una opcion: ");
    scanf("%d", &opcion3);
    return opcion3;
}

int submenu4(void) {
    int opcion4;
    printf("\n--- Resistencia para un LED ---\n");
    printf("1. Calcular Resistencia para un LED\n");
    printf("2. Volver al menú principal\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion4);
    return opcion4;
}
