#include <stdio.h>
#include <cs50.h>  

int main(void)
{
    // Solicitar al usuario el número base para la tabla de multiplicar
    int numero = get_int("Introduce el número para generar la tabla de multiplicar: ");

    // Solicitar al usuario el límite hasta donde se multiplicará
    int limite = get_int("Introduce el límite hasta donde deseas multiplicar: ");

    printf("\nTabla de multiplicar del %d hasta %d:\n", numero, limite);
    for (int i = 1; i <= limite; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
