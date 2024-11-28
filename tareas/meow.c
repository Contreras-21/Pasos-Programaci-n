#include <stdio.h>
#include <cs50.h>

void sayMeow(int times);

int main(void)
{
    int num = get_int("¿Cuántas veces te gustaría decir meow? ");
    sayMeow(num);
}

void sayMeow(int times)
{
    // Usamos un bucle do-while para asegurar que imprima al menos una vez
    do
    {
        printf("Meow\n");
        times--;  // Decrementamos el contador de veces
    }
    while (times > 0);  // Se sigue ejecutando mientras 'times' sea mayor que 0
}
//Contreras
