#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminante, x1, x2, parteReal, parteImaginaria;

    printf("=== SOLUCIONADOR DE ECUACIONES CUADRÁTICAS ===\n\n");
    printf("La ecuación tiene la forma: ax² + bx + c = 0\n\n");

    printf("Ingrese el coeficiente a: ");
    scanf("%lf", &a);
    printf("Ingrese el coeficiente b: ");
    scanf("%lf", &b);
    printf("Ingrese el coeficiente c: ");
    scanf("%lf", &c);

    printf("\nEcuación: %.2lfx² + %.2lfx + %.2lf = 0\n", a, b, c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("\n--- RESULTADO ---\n");
                printf("La ecuación es degenerada: 0 = 0\n");
                printf("Todas las x son solución (infinitas soluciones)\n");
            } else {
                printf("\n--- RESULTADO ---\n");
                printf("La ecuación es imposible: %.2lf = 0\n", c);
                printf("No tiene solución\n");
            }
        } else {
            x1 = -c / b;
            printf("\n--- RESULTADO ---\n");
            printf("No es una ecuación cuadrática (a = 0)\n");
            printf("Es una ecuación lineal con solución única:\n");
            printf("x = %.2lf\n", x1);
        }
        return 0;
    }

    discriminante = b * b - 4 * a * c;

    printf("\n--- RESULTADO ---\n");
    printf("Discriminante (Δ) = %.2lf\n", discriminante);

    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);

        printf("Dos raíces reales diferentes:\n");
        printf("x₁ = %.2lf\n", x1);
        printf("x₂ = %.2lf\n", x2);

    } else if (discriminante == 0) {
        x1 = -b / (2 * a);

        printf("Una raíz real doble:\n");
        printf("x = %.2lf\n", x1);

    } else {
        parteReal = -b / (2 * a);
        parteImaginaria = sqrt(-discriminante) / (2 * a);

        printf("Dos raíces complejas conjugadas:\n");
        printf("x₁ = %.2lf + %.2lfi\n", parteReal, parteImaginaria);
        printf("x₂ = %.2lf - %.2lfi\n", parteReal, parteImaginaria);
    }

    return 0;
}
