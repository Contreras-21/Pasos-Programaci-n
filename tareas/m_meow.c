#include <stdio.h>
#include <cs50.h>  // Librería opcional para la función get_int()

// Prototipos de funciones
int obtener_rango_inicio(void);
int obtener_rango_fin(int inicio);
void imprimir_meow(int inicio, int fin);

int main(void)
{
    // Obtener el número de inicio del rango
    int inicio = obtener_rango_inicio();

    // Obtener el número de fin del rango, asegurando que sea mayor o igual al inicio
    int fin = obtener_rango_fin(inicio);

    // Llamar a la función para imprimir "Meow" desde inicio hasta fin
    imprimir_meow(inicio, fin);

    return 0;
}

// Función para obtener el inicio del rango, asegurando que sea positivo
int obtener_rango_inicio(void)
{
    int inicio;
    do
    {
        inicio = get_int("Introduce el número de inicio del rango (positivo): ");
    }
    while (inicio <= 0);
    return inicio;
}

// Función para obtener el fin del rango, asegurando que sea mayor o igual al inicio
int obtener_rango_fin(int inicio)
{
    int fin;
    do
    {
        fin = get_int("Introduce el número de fin del rango (debe ser mayor o igual que %i): ", inicio);
    }
    while (fin < inicio);
    return fin;
}

// Función para imprimir "Meow" desde el número de inicio hasta el número de fin
void imprimir_meow(int inicio, int fin)
{
    printf("\nImprimiendo 'Meow' desde %i hasta %i:\n", inicio, fin);
    for (int i = inicio; i <= fin; i++)
    {
        printf("%i. Meow\n", i);
    }
}
