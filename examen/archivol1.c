
// Archivo I1.c
#include <stdio.h>

int main(void) {
    int n, i, pares = 0;
    
    do {
        printf("Ingrese un numero entre 1 y 10: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10); // ERROR: Faltaba el punto y coma (;) al final de la estructura do-while. Se corrigió agregando el ';'.

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) // ERROR: Se estaba utilizando el operador de asignación '=' en lugar del operador de comparación '=='. Se corrigió a '=='.
            pares++;
    }

    if (pares < 2 || pares > 3) // ERROR: Error lógico. Se usó el operador AND (&&) para verificar si estaba fuera de rango, lo cual es una condición imposible (no puede ser menor que 2 y mayor que 3 a la vez). Se corrigió usando el operador lógico OR (||).
        printf("Cantidad fuera de rango\n");
    else
        printf("Pares: %d\n", pares);
        
    return 0;
}