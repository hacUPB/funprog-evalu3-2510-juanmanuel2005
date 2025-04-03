# ACTIVIDAD 2  
En esta unidad se aprenden a usar los condicionales y se realizan ejemplos con este.  

## Actividad: Probando Operadores Relacionales  
1. Copia el siguiente código base y pégalo en tu editor de C.  
2. Reemplaza en el lugar indicado la operación relacional, tomar al menos 3 de las que se proponen a continuación.  

```
(A > 0) && (B > C) || (C > 0)
(X < Y) && (Z >= 0) || (Y == 10)
(A * B < C) && !(B == 4) || (C / B >= 2)
(A < B) && (C != 0) || (A + B > C)
(A > B) && (B > C) && (C > 0)
(M % 2 == 0) || (N % 3 != 0) && (P > Q)
!(R <= S) && (T > U) || (V == W)
(D + E >= F) && (G - H < I) || !(J == K)
(L * M > N) || (O / P < Q) && (R != S)
(T % 5 == 0) && !(U < V) || (W + X > Y)

```
Reemplazar operadores en este codigo.  

```
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int resultado;
    // Reemplaza el operador en la siguiente línea
    resultado = (a > b);
    printf("El resultado es %d\n", resultado);
    return 0;
}
```  

# ADJUNTAR IMAGENES DESPUES DE REEMPLAZAR OPERADORES
  

## Ejemplo de ``switch``  
Imagina que tienes un sistema que selecciona el modo de operación de una fuente de alimentación. Dependiendo del modo, ajustas la salida:  

- `1`: Modo Alta Tensión (p. ej., 12 V)  
- `2`: Modo Media Tensión (p. ej., 5 V)  
- `3`: Modo Baja Tensión (p. ej., 3.3 V)  

```
#include <stdio.h>

int main() {
    int modo;

    printf("Selecciona el modo de la fuente (1, 2 o 3): ");
    scanf("%d", &modo);

    switch(modo) {
        case 1:
            printf("Modo Alta Tensión seleccionado: 12 V\n");
            break;
        case 2:
            printf("Modo Media Tensión seleccionado: 5 V\n");
            break;
        case 3:
            printf("Modo Baja Tensión seleccionado: 3.3 V\n");
            break;
        default:
            printf("Modo no válido\n");
            break;
    }

    return 0;
}

```
## Ejemplo de menu con ``switch``  

```
#include <stdio.h>

int main() {
    int opcion;

    printf("=== MENU PRINCIPAL ===\n");
    printf("1. Ver datos de sensores\n");
    printf("2. Configurar parámetros\n");
    printf("3. Salir\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Mostrando datos de sensores...\n");
            break;
        case 2:
            printf("Entrando a configuración...\n");
            break;
        case 3:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción inválida.\n");
            break;
    }

    return 0;
}
```
## Ejercicio con ``switch``  
Crea un programa que presente un menú similar al ejemplo anterior, pero que muestre:  

- **Opción 1**: "Encender LED"  
- **Opción 2**: "Apagar LED"  
- **Opción 3**: "Mostrar estado del LED"  
- **Opción 4**: Salir   

# HACER EL EJERCICIO

## Ejercicio de calculadora
Se creo un codigo con un menu que da 5 opciones para realizar las funciones basicas dando las siguientes opciones.  

1. Sumar.  
2. Restar.  
3. Multiplicar.  
4. Dividir.  
5. Salir.  

El codigo es este:  
```
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
```
## Ejercicios propuestos

1. Condicional doble: Escribe un programa que pregunte la edad y te indique si eres mayor o menor de edad.  
2. ``if-else if-else``: Crea un programa que evalúe la calificación de un alumno (0-5) e imprima: "Insuficiente", "Aceptable", "Sobresaliente", etc.   
3. Menú repetitivo: Implementa un menú con al menos cuatro opciones y un bucle que permita seleccionar repetidamente cualquier opción hasta que se elija "Salir".   

# REALIZAR LOS EJERCICIOS







