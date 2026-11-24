
// Archivo I2.c
#include <stdio.h>

int main(void) {
    int n, i, suma = 0, opcion;
    
    printf("Ingrese n: ");
    scanf("%d", &n);
    
    opcion = 1;
    
    while (opcion == 1) { // ERROR: Se usó el operador de asignación '=' en lugar del de comparación '=='. Esto provocaba que la condición siempre fuera verdadera (1) creando un bucle infinito. Se corrigió a 'opcion == 1'.
        for (i = 1; i <= n; i++) { // ERROR: El bucle for tenía la condición 'i < n', lo que excluía el valor límite 'n' (por ejemplo, para n=3, solo sumaría 1² y omitiría 3²). Se corrigió a 'i <= n' para incluir 'n' en el cálculo.
            if (i % 2 == 1)
                suma = suma + i * i;
        }
        opcion = 0;
    }
    
    printf("Suma de cuadrados impares: %d\n", suma);
    
    return 0;
}