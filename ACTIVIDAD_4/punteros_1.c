//Código ejemplo
#include <stdio.h>
 
int suma(int *, int *); // los astericos me indican que son punteros
 
int main(int argc, char const *argv[])
{
    int resultado, num1, num2;
    num1 = 100;
    num2 = 400;
    resultado = suma(&num1, &num2);
    printf("suma = %d\n", resultado);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
 // esto hace que los valores de los numeros cambien pero la suma sigue siendo el resultado de los numeros anteriores sin embargo se modifican los numeros despues de esta suma.
int suma(int *ptr_n1, int *ptr_n2)
{
    int res_suma;
    res_suma = (*ptr_n1) + (*ptr_n2);
    (*ptr_n1) = 999;
    (*ptr_n2) = 777;
    return res_suma;
}
 