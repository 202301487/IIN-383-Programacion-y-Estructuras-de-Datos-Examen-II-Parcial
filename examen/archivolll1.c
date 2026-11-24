
// Archivo III1.c
#include <stdio.h>

int main(void) {
    int n, digito;
    int suma = 0;
    int cantidad = 0;

    // Validación: repetir la lectura si el número es menor que 1
    do {
        printf("Ingrese un entero positivo: ");
        scanf("%d", &n);
    } while (n < 1);

    // Ciclo while para separar, contar y sumar los dígitos
    while (n > 0) {
        digito = n % 10;       // Obtenemos el último dígito
        suma = suma + digito;  // Sumamos el dígito a la suma total
        cantidad++;            // Contamos el dígito
        n = n / 10;            // Eliminamos el último dígito del número
    }

    // Impresión de los resultados
    printf("suma %d y %d digitos\n", suma, cantidad);

    return 0;
}