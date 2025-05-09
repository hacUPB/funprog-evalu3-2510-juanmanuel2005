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