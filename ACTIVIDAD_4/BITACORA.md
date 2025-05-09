# ACTIVIDAD 4 

## Funciones 
Estas se dividen en tres partes el prototipo de la funcion, la definicion de la función y por ultimo el llamado de la función.     

## Preguntas de Control de Comprensión

1. ¿Para qué sirve un prototipo de función?   
R// Para avisarle al programa cómo es la función antes de usarla.   

2. ¿Cuál es la diferencia entre parámetros y argumentos?  
R// Los parámetros están en la definición de la función; los argumentos son los valores que le pasas cuando la llamas.  
    
3. ¿Qué sucede si no incluyes el archivo de cabecera de una función de biblioteca estándar?    
R// Puede que no compile o dé errores porque no reconoce la función.   
   
4. ¿Por qué ``main()`` es especial en C?    
R// Porque es donde empieza a ejecutarse el programa.    
    
5. ¿Qué ocurre si una función no retorna ningún valor?    
R// Se debe declarar como ``void`` y simplemente no devuelve nada.   
   
## Ejercicios
Se realizaron varios ejercicios con punteros como estos:

- En este se utiliza una funcion encabezado que lo que hace es imprimir un encabezado con nombre, universidad, carreara e id.  
    
```
#include <stdio.h>
// Prototipo de la función 
void encabezado(void);
//------------------------------------------------------------------------------

int main(int arg, char const *argv[])
{
    encabezado();

    return 0;
}

//------------------------------------------------------------------------------
//Definición de la función
void encabezado(void)
{
    // Imprimir el encabezado
    printf("/******************************************************************************\n");
    printf("\n");
    printf("                     UNIVERSIDAD PONTIFICIA BOLIVARIANA\n");
    printf("                     Escuela de Ingenierías\n");
    printf("                     Ingeniería Eléctrica\n");
    printf("                     Juan Manuel Gómez\n");
    printf("                     ID: 000516995\n");
    printf("\n");
    printf("*******************************************************************************/\n");
}

```    
   
## Punteros con funciones.
Se craron varios codigos en los que se hacen funciones y se utilizan punteros.   

- En este se crea una funcion en la que se calcula el promedio de 3 variables.   
    
```
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
```   



