# ACTIVIDAD 3  

## Ejerccicios  
1. Contador de 1 hasta 10.  

```
#include <stdio.h>

int main() {
    int contador = 0;

    while (contador <= 1000) {
        printf("Iteración: %d\n", contador);
        contador++;
    }

    return 0;
}
```
Este codigo apesar de que solo se pedia contar hasta 10 se hizo hasta 1000 sinembargo solo se debe de hacer un cambio en el codigo en la parte que dice ``while (contador <= 1000)`` y cambiar ese 1000 por un 10.  

2. Menu con do while.  
En este se pedia hacer una calculadora con la opcion sumar y restar pero ya se realizo en la ctividad pasada con 5 opciones usando do while donde se pfrecia la opcion de sumar, restar, multiplicar y dividir.   

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
3. Tablsa de multiplicar con for.   

```
#include <stdio.h>

int main() {
    int num;

    // Pedir al usuario que ingrese un número
    printf("Ingresa un número para mostrar su tabla de multiplicar: ");
    scanf("%d", &num);

    printf("Tabla de multiplicar del %d:\n", num);

    // Bucle for para iterar del 1 al 10
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
```
4. busqueda de el minmo con for.  

```
#include <stdio.h>

int main() {
    int numero, minimo;

    // Pedir el primer número
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // Inicializar el mínimo con el primer número
    minimo = numero;

    // Repetir 4 veces más para completar los 5 números
    for (int i = 2; i <= 5; i++) {
        printf("Ingresa otro número: ");
        scanf("%d", &numero);

        if (numero < minimo) {
            minimo = numero;
        }
    }

    printf("El valor mínimo ingresado es: %d\n", minimo);

    return 0;
}
```  
Tambien se realizaron otros ejercicios como estos:   

- En este hace un triangulo o escalera con los numeros desde el 1 hasta n seindo n un numero dado por el usuario.  
    
```
#include <stdio.h>
 
int main() {
    int num;
 
    printf("Ingresa un número : ");
    scanf("%d", &num);
    printf("\n");
 
    printf("Numeros hasta %d:\n", num);
    printf("\n");
 
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++){
        printf("%d ", j);
        
    }
    printf("\n");
    }
 
    return 0;
}
```   

- En este se buscan los impares desde el 100 hasta el -200.  
   
```
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
```     
       
- En este se le pide al usuario dar un rango de numeros para revisar desde r1 hasta r2 siendo estos los numeros solicitados al usuario y en este rango busca los multiplos de 5 y 3, ademas cuando es multiplo de 5 y 3 imprime Buzz Biss, cuando es multiplo de 5 imprime Buzz, cuando es multiplo de 3 imprime Biss y cuando no es multiplo de ninguno solo muestra el numero.    
   
```  
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
```   
