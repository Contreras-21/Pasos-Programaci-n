#include <stdio.h>

int main(void)
{
    int n = 1000;
    //La siguiente formula es inspirada en Gauss (sumatoria del 1 al 100 = 5050)
    int suma = (n * (n + 1)) / 2;

    printf("La sumatoria de los números comprendidos entre 1 y 1000 es: %d\n", suma);

    return 0;
}
//Contreras
