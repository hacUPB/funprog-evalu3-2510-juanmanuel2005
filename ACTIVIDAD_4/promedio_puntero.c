#include <stdio.h>


void Promedio(float *);

int main(int argc, char const *argv[])
{
    float promedio; 
    Promedio(&promedio); 
    printf("Promedio = %f\n", promedio); // Imprimir el promedio calculado
    
    return 0;
}

// Definición de la función Promedio
void Promedio(float *promedio)
{
    float num1, num2, num3; // Tres variables para almacenar los números ingresados
    printf("Ingrese el primer numero: \n");
    scanf("%f", &num1);
    
    printf("Ingrese el segundo numero: \n");
    scanf("%f", &num2);
    
    printf("Ingrese el tercer numero: \n");
    scanf("%f", &num3);
    
    // Calcular el promedio
    *promedio = (num1 + num2 + num3) / 3;
}
