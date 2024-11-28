#include <cs50.h>
#include <stdio.h>

void print_matrix(int number);

int main(void)
{
    int matrix = get_int("Introduce el numero de tu matriz:\n");
    for (int i = 0; i < matrix; i++)
    {
        print_matrix(matrix);
    }
}

void print_matrix(int number)
{
    for (int i = 1; i < number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
