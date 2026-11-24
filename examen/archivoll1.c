
// Archivo II1.c
#include <stdio.h>

int main(void) {
    float a, b, c;

    printf("Ingrese los tres lados del triangulo (separados por espacio): ");
    scanf("%f %f %f", &a, &b, &c);

    // Verificamos si los lados forman un triángulo
    // La suma de dos lados cualesquiera debe ser estrictamente mayor que el tercero
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
        // Clasificación del triángulo
        if (a == b && b == c) {
            printf("Forman un triangulo equilatero.\n");
        } 
        else if (a == b || a == c || b == c) {
            printf("Forman un triangulo isosceles.\n");
        } 
        else {
            printf("Forman un triangulo escaleno.\n");
        }
        
    } else {
        printf("No forman triangulo.\n");
    }

    return 0;
}