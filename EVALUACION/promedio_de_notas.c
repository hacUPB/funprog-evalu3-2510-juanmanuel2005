// el codigo que se hizo es este 
// # include <stdio>
//int main(){
//float  calificacion, promedio
//int contador

//printf ("Ingrese calificación (ingrese -1 para realizar el propmedio): \n");

//while(1)
//{
    //printf ("Calificación %d");
  //  scanf ("%f" &calificacion);
    
//}




//return 0;
//}

// código corregido se corrigió algo de la librería ya que falto poner el .h, se agrego la variable suma e i además se corrigió algo dentro del printf del while y se termino el código que estaba sin terminar, además se igualo la variable contador a 0
#include <stdio.h>

int main()
{
    float calificacion, promedio, suma = 0;
    int contador = 0, i = 1;
    
    printf ("Ingrese calificación (ingrese -1 para realizar el promedio): \n");
    
    while (1){
        printf ("Calificación %d ", i);
        scanf ("%f", &calificacion);
        
        if (calificacion == -1){
            break;
        }
        if (calificacion >= 0){
            suma += calificacion;
            contador++;
            i++;
        }
        else {
            printf ("calificacion invalida. Ingrese un valor mayor o igual a 0. \n");
        }
    }
    if (contador > 0){
        promedio = suma/contador;
        printf("Cantidad de calificaciones: %d\n", contador);
        printf("El promedio es: %.2f\n", promedio);
    }
    else {
        printf("No se ingresaron calificaciones validas");
    }

    return 0;
}