
// Archivo V1.c
/*
a) PLAN DE PRUEBAS
- Caso 1 (Normal): n=3 (50, 80, 95) -> Promedio: 75.00, Aprobados: 2, Max: 95.00
- Caso 2 (Reprobados): n=2 (30, 45) -> Promedio: 37.50, Aprobados: 0, Max: 45.00
- Caso 3 (Límite): n=1 (100) -> Promedio: 100.00, Aprobados: 1, Max: 100.00

b) COMPLEJIDAD TEMPORAL
- O(n) (Tiempo lineal). Porque el ciclo principal se repite 'n' veces (según la 
  cantidad de estudiantes) y las operaciones dentro de él toman tiempo constante.
*/

#include <stdio.h>

int main(void) {
    int n, i;
    int aprobados = 0;
    float calificacion, promedio;
    float suma = 0.0;
    float maxima = -1.0; 

    // Validar cantidad de estudiantes (1 a 30)
    do {
        printf("Ingrese la cantidad de estudiantes (1 a 30): ");
        scanf("%d", &n);
    } while (n < 1 || n > 30);

    // Leer y procesar las calificaciones
    for (i = 1; i <= n; i++) {
        // Validar cada calificación (0 a 100)
        do {
            printf("Nota estudiante %d (0-100): ", i);
            scanf("%f", &calificacion);
        } while (calificacion < 0 || calificacion > 100);

        // Sumar al acumulador
        suma = suma + calificacion;

        // Contar aprobados
        if (calificacion >= 60) {
            aprobados++;
        }

        // Determinar la calificación máxima
        if (calificacion > maxima) {
            maxima = calificacion;
        }
    }

    // Calcular el promedio
    promedio = suma / n;

    // Imprimir los resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Promedio: %.2f\n", promedio);
    printf("Aprobados: %d\n", aprobados);
    printf("Nota maxima: %.2f\n", maxima);

    return 0;
}