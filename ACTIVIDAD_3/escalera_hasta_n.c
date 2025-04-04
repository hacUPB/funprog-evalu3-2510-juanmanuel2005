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