#include <stdio.h>

int main() {
    int n, i, num, mayor;

    // Realice el trabajo de esta manera para no hacer varios codigos.
    printf("¿Cuántos números deseas ingresar? ");
    scanf("%d", &n);

    // Al pedir el primer número y establecerlo como el mayor los numeros que se ingresen seran comparados hasta encontrar un numero mayor.
    printf("Ingresa el número 1: ");
    scanf("%d", &num);
    mayor = num;

    for (i = 2; i <= n; i++) {
        printf("Ingresa el número %d: ", i);
        scanf("%d", &num);

        if (num > mayor) {
            mayor = num;
        }
    }

    // Mostrar el mayor número ingresado
    printf("El número mayor es: %d\n", mayor);

    return 0;
}
