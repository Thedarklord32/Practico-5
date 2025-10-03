#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminante, x1, x2, parteReal, parteImaginaria;

    printf("=== RESOLVEDOR DE ECUACIONES CUADRATICAS ===\n");
    printf("Forma: ax^2 + bx + c = 0\n\n");

    printf("Ingrese el coeficiente a: ");
    scanf("%lf", &a);

    printf("Ingrese el coeficiente b: ");
    scanf("%lf", &b);

    printf("Ingrese el coeficiente c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("\nERROR: El coeficiente 'a' no puede ser cero.\n");
        printf("Esto no es una ecuacion cuadratica.\n");
        return 1;
    }

    discriminante = b * b - 4 * a * c;

    printf("\n--- RESULTADOS ---\n");
    printf("Ecuacion: %.2lfx^2 + %.2lfx + %.2lf = 0\n", a, b, c);
    printf("Discriminante: %.2lf\n", discriminante);

    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);

        printf("Tipo: Dos soluciones reales diferentes\n");
        printf("x1 = %.4lf\n", x1);
        printf("x2 = %.4lf\n", x2);
    }
    else if (discriminante == 0) {
        x1 = -b / (2 * a);

        printf("Tipo: Una solucion real (raiz doble)\n");
        printf("x = %.4lf\n", x1);
    }
    else {
        parteReal = -b / (2 * a);
        parteImaginaria = sqrt(-discriminante) / (2 * a);

        printf("Tipo: Dos soluciones complejas conjugadas\n");
        printf("x1 = %.4lf + %.4lfi\n", parteReal, parteImaginaria);
        printf("x2 = %.4lf - %.4lfi\n", parteReal, parteImaginaria);
    }

    return 0;
}
