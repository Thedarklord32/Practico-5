#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    int opcion;
    float valor1, valor2, area;

    printf("CALCULADORA DE ÁREAS\n");

    do {
        printf("\n1. Cuadrado (Lado×Lado)");
        printf("\n2. Círculo (π×Radio²)");
        printf("\n3. Triángulo (Base×Altura/2)");
        printf("\n4. Salir");
        printf("\nOpción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Lado del cuadrado: ");
                scanf("%f", &valor1);
                area = valor1 * valor1;
                printf("Área = %.2f × %.2f = %.2f\n", valor1, valor1, area);
                break;

            case 2:
                printf("Radio del círculo: ");
                scanf("%f", &valor1);
                area = PI * valor1 * valor1;
                printf("Área = π × %.2f² = %.2f\n", valor1, area);
                break;

            case 3:
                printf("Base del triángulo: ");
                scanf("%f", &valor1);
                printf("Altura del triángulo: ");
                scanf("%f", &valor2);
                area = (valor1 * valor2) / 2;
                printf("Área = (%.2f × %.2f) / 2 = %.2f\n", valor1, valor2, area);
                break;

            case 4:
                printf("¡Hasta pronto!\n");
                break;

            default:
                printf("Opción inválida\n");
        }

    } while(opcion != 4);

    return 0;
}
