#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int num = get_int("Dime el numero multiplicador: \n");

    printf("Tabla del numero %i\n", num);

    for (int i = 0; i < 10; i++)
    {

        printf("%i x %i = %i\n", num, i + 1, num * (i + 1));
    }
}
