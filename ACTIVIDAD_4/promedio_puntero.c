#include <stdio.h>

void Promedio(float, float, float, float *);

int main(int argc, char const *argv[])
{
    float num1, num2, num3, promedio; 
    
    // Solicitar los tres números
    printf("Ingrese el primer numero: \n");
    scanf("%f", &num1);
    
    printf("Ingrese el segundo numero: \n");
    scanf("%f", &num2);
    
    printf("Ingrese el tercer numero: \n");
    scanf("%f", &num3);
    
    // Llamar a la función Promedio
    Promedio(num1, num2, num3, &promedio); 
    
    // Imprimir el promedio calculado
    printf("Promedio = %f\n", promedio); 
    
    return 0;
}

// Definición de la función Promedio
void Promedio(float var1, float var2, float var3, float *promedio)
{
    // Calcular el promedio
    *promedio = (var1 + var2 + var3) / 3;
}
