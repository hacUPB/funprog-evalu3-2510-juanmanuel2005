#include <stdio.h>
#include <math.h>

void operacion_punteros(float *, double *);

int main(int argc, char const *argv[])
{
    float cubo;
    double coseno;
    operacion_punteros(&cubo, &coseno);
    printf("Cubo = %f\n", cubo);
    printf("Coseno = %lf\n", coseno);
    
    return 0;
}

// Definicion de la funcion 
void operacion_punteros(float *var1, double *var2)
{
    // En la variable a la que apunta var1 voy a guardar el cubo de un numero
    //que ingresa el usuario y en la varibale a la que apunta var2 el coseno
    float dato;
    double coseno;
    printf("ingrese un dato: \n");
    scanf("%f", &dato);
    (*var1) = pow(dato,3); // Guarda en la varibale cubo = dato ^3
    (*var2) = cos(dato); // Guarda en la varibale coseno = cos(dato) 
    //ademas el coseno nos da el resultado en radianes lo que significa que tocma el dato en radianes 
}