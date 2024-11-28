#include <cs50.h>
#include <stdio.h>

// Prototipo de las funciones
void say_meow(int times);
int get_positive_int(void);

int main(void)
{

    int num = get_positive_int();

    say_meow(num); 
}

void say_meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("%i. Meow\n", i + 1);
    }
}

int get_positive_int(void)
{
    int num;
    do
    {
        num = get_int("How many times would you like to say meow? ");  // El Osacarin se la rifa.
    }
    while (num <= 0);  // Repetir si el número es menor o igual a 0
    return num;
}

//funcion que le pida al ususario un numero entre un rango, no permitir y repetir


