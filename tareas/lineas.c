#include <stdio.h>
#include <cs50.h>

// Prototipos de las funciones
void imprimir_vertical(int veces);
void imprimir_horizontal(int veces);

int main(void)
{
    // Solicitar al usuario cuántas veces quiere imprimir #
    int num = get_int("¿Cuántas veces deseas imprimir el símbolo #? ");


    printf("Imprimiendo de forma vertical:\n");
    imprimir_vertical(num);


    printf("Imprimiendo de forma horizontal:\n");
    imprimir_horizontal(num);

    return 0;
}

// Función que imprime el símbolo '#' de forma vertical
void imprimir_vertical(int veces)
{
    for (int i = 0; i < veces; i++)
    {
        printf("#\n");  // Salto de línea después de cada símbolo
    }
}

// Función que imprime el símbolo '#' de forma horizontal
void imprimir_horizontal(int veces)
{
    for (int i = 0; i < veces; i++)
    {
        printf(" # ");
    }
    printf("\n");  // Salto de línea al final de la impresión horizontal
}
