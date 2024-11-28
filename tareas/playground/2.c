#include <stdio.h>

int main(void) {
    // Filas y columnas de la matriz
    int f = 2, c = 60;

    // Imprimir 6 saltos de línea
    printf("\n\n\n\n\n\n");

    // Imprimir gráfico (se alineará a la derecha)
    printf("                   [?]\n\n\n");
    printf("                                      (0)      \n");
    printf("                   [?]             [ ][?][ ][?]\n\n\n");

    // Espacios para alinear el gráfico a la derecha (suponiendo una consola de 80 caracteres)
    int spaces = 60 - 10; // 80 es el ancho total y 10 es el tamaño aproximado del gráfico
    printf("%*s[    ]\n", spaces, "");
    printf("%*s 0 0 0  ('-')   ('-')  │  │  \n", spaces - 22, "");

    // Crear e imprimir la matriz de caracteres '#'
    char A[f][c];  // Matriz de caracteres

    // Inicializar la matriz con el símbolo '#'
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            A[i][j] = '#';
        }
    }

    // Imprimir la matriz
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            putchar(A[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
//Contreras
