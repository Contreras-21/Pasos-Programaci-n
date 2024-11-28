#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // filas
    int f = 2;
    // columnas
    int c = 60;
    // saltos de línea
    int s = 6;
    char A[f][c];  // Matriz
    int i, j;

    // Imprimir 6 saltos de línea antes de imprimir el gráfico y la matriz
    for (int k = 0; k < s; k++) {
        printf("\n");  // Imprime un salto de línea en cada iteración
    }
    printf("                   [?]\n\n\n");
    printf("                                      (0)      \n");
    printf("                   [?]             [ ][?][ ][?]\n\n\n");

    // Imprimir la figura alineada a la derecha (usando espacios)
    // Suponiendo que la consola tiene 80 caracteres de ancho,
    // ajustamos el número de espacios para colocar la figura en el extremo derecho
    int spaces = 60 - 10;  // 80 es el ancho total y 10 es el tamaño aproximado del gráfico
    for (int k = 0; k < spaces; k++) {
        printf(" ");  // Imprime espacios antes de la figura
    }
    // Imprimir la figura a la derecha
    printf("[    ]\n");
    for (int k = 0; k < spaces-21; k++) {
        printf(" ");  // Imprime más espacios
    }
    printf(" 0 0 0  ");  printf("('-')   ('-')"); printf(" │  │  \n");

    // Inicialización de la matriz con el símbolo '#'
    for (i = 0; i < f; i++) {
        for (j = 0; j < c; j++) {
            A[i][j] = '#';  // Asigna '#' a cada posición
        }
    }

    // Impresión de la matriz
    for (i = 0; i < f; i++) {
        for (j = 0; j < c; j++) {
            printf("%c", A[i][j]);
        }
        printf("\n");  // Nueva línea al final de cada fila
    }

    return 0;

}


