#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Dime el numero multiplicador: \n");

    printf("Tabla del numero %i\n", num);

    int i = 1;

    while (i <= 10)
    {
        printf("%i x %i = %i\n", num, i, num * i);
        i++;
    }
}
//Contreras
