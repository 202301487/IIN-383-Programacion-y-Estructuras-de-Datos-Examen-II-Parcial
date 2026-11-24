
// Archivo IV1.c
/* 
REFINAMIENTO SUCESIVO
NIVEL 0: Calcular factura de compra (subtotal, descuento, ISV y total a pagar).

NIVEL 1:
1. Validar cantidad de productos (n).
2. Leer precio y cantidad de cada producto para sumar el subtotal.
3. Calcular descuento, ISV y el total.
4. Imprimir la factura.

NIVEL 2:
1. Pedir 'n' entre 1 y 20 (repetir si es inválido).
2. Ciclo de 1 a n: validar precio (>0) y cantidad (>0). Sumar al subtotal.
3. Descuento = 10% si subtotal >= 1000 (0 si no).
4. ISV = 15% de (subtotal - descuento).
5. Total = subtotal - descuento + ISV.
6. Imprimir valores con 2 decimales.
*/

#include <stdio.h>

int main(void) {
    int n, i, cantidad;
    float precio;
    float subtotal = 0.0, descuento = 0.0, isv = 0.0, total = 0.0;

    // 1. Validar cantidad de productos (n)
    do {
        printf("Ingrese la cantidad de productos (1 a 20): ");
        scanf("%d", &n);
    } while (n < 1 || n > 20);

    // 2. Leer precio, cantidad y acumular subtotal
    for (i = 1; i <= n; i++) {
        do {
            printf("Precio producto %d (> 0): ", i);
            scanf("%f", &precio);
        } while (precio <= 0);

        do {
            printf("Cantidad producto %d (> 0): ", i);
            scanf("%d", &cantidad);
        } while (cantidad <= 0);

        subtotal = subtotal + (precio * cantidad);
    }

    // 3. Calcular descuento
    if (subtotal >= 1000) {
        descuento = subtotal * 0.10;
    }

    // 4. Calcular ISV
    isv = (subtotal - descuento) * 0.15;

    // 5. Calcular total
    total = subtotal - descuento + isv;

    // 6. Imprimir factura
    printf("\n--- FACTURA ---\n");
    printf("Subtotal:  L %.2f\n", subtotal);
    printf("Descuento: L %.2f\n", descuento);
    printf("ISV (15%%): L %.2f\n", isv);
    printf("Total:     L %.2f\n", total);

    return 0;
}