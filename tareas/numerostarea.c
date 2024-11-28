#include <stdio.h>

int main() {
    int cantidad, i;
    float numero, mayor;

    // Pedir al usuario la cantidad de números
    printf("¿Cuántos números deseas ingresar?: ");
    scanf("%d", &cantidad);

    // Pedir el primer número y asignarlo como el mayor inicialmente
    printf("Ingresa el número 1: ");
    scanf("%f", &numero);
    mayor = numero;

    // Iterar por los números restantes
    for (i = 2; i <= cantidad; i++) {
        printf("Ingresa el número %d: ", i);
        scanf("%f", &numero);

        // Comprobar si el número actual es mayor
        if (numero > mayor) {
            mayor = numero;
        }
    }

    // Mostrar el número mayor
    printf("El número mayor es: %.2f\n", mayor);

    return 0;
}
