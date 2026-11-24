
// Archivo III2.c
#include <stdio.h>

int main(void) {
    int n, i;

    // Validación: pedir el número hasta que esté entre 1 y 12
    do {
        printf("Ingrese un numero entre 1 y 12: ");
        scanf("%d", &n);
    } while (n < 1 || n > 12);

    // Ciclo for para imprimir la tabla de multiplicar del 1 al 10
    printf("Tabla de multiplicar del %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}