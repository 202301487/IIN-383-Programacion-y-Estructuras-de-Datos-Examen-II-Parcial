
// Archivo I3.c
#include <stdio.h>

int main(void) {
    // ERROR: Estilo de código. Se cambiaron los nombres de las variables 'n', 'i' y 'fact' a 
    // nombres más descriptivos ('numero', 'iterador' y 'factorial') para mejorar la legibilidad.
    int numero, iterador, factorial; 

    // ERROR: Estilo de código. Se aplicó la sangría correcta a todo el bloque de código.
    do {
        printf("Ingrese un entero no negativo: ");
        scanf("%d", &numero);
    } while (numero < 0); // ERROR: Error lógico. La condición original era 'n > 0', lo que obligaba a repetir si el número era positivo. Se corrigió a 'numero < 0' para rechazar y repetir solo los números negativos.

    factorial = 1; // ERROR: Error lógico. La variable factorial estaba inicializada en 0 ('fact = 0;'), lo que causaba que todas las multiplicaciones posteriores dieran como resultado 0. El elemento neutro de la multiplicación es 1.

    for (iterador = 1; iterador <= numero; iterador++) {
        factorial = factorial * iterador;
    }

    if (numero == 0) // ERROR: Error de sintaxis/lógico. Se utilizó el operador de asignación '=' en lugar del operador relacional '=='. Esto asignaba 0 a la variable y siempre evaluaba como falso. Se corrigió a 'numero == 0'.
        printf("0! = 1\n");
    else
        printf("%d! = %d\n", numero, factorial);

    return 0;
}