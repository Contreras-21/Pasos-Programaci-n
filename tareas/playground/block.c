#include <stdio.h>
#include <cs50.h>

void print_rows(int times);
void print_matrix(int number);

int main (void)
{
    int matrix = get_int("Introduce el numero de tu matriz:\n");
    for(int i = 0; i < matrix; i++ )
    {
        print_rows(matrix);
    }
}

void print_rows(int times)
{
    for (int i= 0; i < 3; i++)
    {
        printf("#");
    }
    printf("\n");
}
