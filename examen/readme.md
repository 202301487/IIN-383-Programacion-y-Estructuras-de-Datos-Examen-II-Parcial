
Estudiante: Ruben Alejandro Suazo Hernandez
codigo de estudiante: 202301487
seccion 1700

descirpciones breves

Ejercicio I.1 (5 pts) · Archivo I1.c · do-while con if y for
El programa debe leer un entero n entre 1 y 10, repitiendo la lectura mientras sea inválido. Luego cuenta los
números pares entre 1 y n. Si la cantidad de pares está entre 2 y 3 (incluidos) imprime el conteo; si no,
imprime Cantidad fuera de rango.

Ejercicio I.2 (5 pts) · Archivo I2.c · while con for y if
El programa debe calcular la suma de los cuadrados de los números impares entre 1 y n. Ejemplo: para n = 3
debe imprimir 10 (1² + 3²).

Ejercicio I.3 (5 pts) · Archivo I3.c · do-while con for y if
El programa debe leer un entero no negativo n (repetir la lectura si es negativo), calcular n! con un ciclo for e
imprimirlo. Si n es 0, debe imprimir 0! = 1. Ejemplo: para n = 5 debe imprimir 120. Además, corrija el estilo del
código (sangría y nombres descriptivos).

Ejercicio II.1 (10 pts) · Archivo II1.c · Clasificación de triángulos
Lea tres lados a, b y c (números reales) y determine:
• Si forman un triángulo. Para que lo formen, la suma de cualquier par de lados debe ser mayor que el
tercer lado. Si no lo forman, imprima No forman triángulo.
• Si forman un triángulo, clasifíquelo como equilátero (tres lados iguales), isósceles (dos lados iguales) o
escaleno (ningún lado igual).
Use operadores relacionales y lógicos en sus condiciones.

Ejercicio II.2 (10 pts) · Archivo II2.c · Categoría de entrada por edad
Lea la edad de una persona (entero) y determine el precio de entrada a un evento según las siguientes
reglas:
• Edad menor que 0: imprima Edad invalida.
• De 0 a 4 años: Entrada gratis.
• De 5 a 12 años: Entrada de niño (L 100).
• De 13 a 59 años: Entrada de adulto (L 200).
• 60 años o más: Entrada de adulto mayor (L 120).
Use operadores relacionales y lógicos donde sean necesarios.

Ejercicio III.1 (10 pts) · Archivo III1.c · Suma de dígitos
Lea un entero positivo n (repita la lectura si es menor que 1). Con un ciclo while, separe sus dígitos usando
los operadores % y / y calcule la suma de los dígitos y la cantidad de dígitos. Imprima ambos resultados.
Ejemplo: para 4837 debe imprimir suma 22 y 4 dígitos.

Ejercicio III.2 (10 pts) · Archivo III2.c · Validación y ciclo for
Pida un número n entre 1 y 12. Si el valor es inválido, debe volver a pedirlo (use un ciclo que repita la lectura
hasta que sea válido). Luego imprima la tabla de multiplicar de n, del 1 al 10, con un ciclo for

Ejercicio IV.1 (15 pts) · Archivo IV1.c · Caja de supermercado
Desarrolle un programa que calcule la factura de una compra con las siguientes reglas:
• Pida la cantidad de productos n, entre 1 y 20. Si es inválida, debe volver a pedirla.
• Por cada producto, lea su precio unitario (mayor que 0) y su cantidad (entero mayor que 0). Acumule el
subtotal de la compra.
• Si el subtotal es mayor o igual que 1000, se aplica un descuento del 10 %. Si no, el descuento es 0.
• El ISV es del 15 % y se calcula sobre el subtotal menos el descuento.
• Imprima el subtotal, el descuento, el ISV y el total a pagar, con dos decimales.

Ejercicio V.1 (20 pts) · Archivo V1.c · Calificaciones del grupo
Desarrolle un programa en C que gestione las calificaciones de un grupo:
• Pida la cantidad de estudiantes n, entre 1 y 30. Si es inválida, debe volver a pedirla.
• Lea las n calificaciones (valores reales entre 0 y 100). Si una calificación es inválida, debe volver a pedirla.
• Calcule e imprima: el promedio del grupo (dos decimales), la cantidad de estudiantes aprobados
(calificación mayor o igual que 60) y la calificación máxima.
Requisitos adicionales (escritos como comentarios dentro del archivo):
a) Un plan de pruebas con al menos tres casos, con sus entradas y su salida esperada, e incluya un caso
límite.
b) Un comentario indicando la complejidad temporal del programa y por qué.