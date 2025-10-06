#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, e, f;
    double determinante, x, y;

    printf("=== SOLUCIONADOR DE SISTEMAS DE ECUACIONES 2x2 ===\n\n");
    printf("Sistema de ecuaciones:\n");
    printf("aX + bY = c\n");
    printf("dX + eY = f\n\n");

    printf("Ingrese el coeficiente a: ");
    scanf("%lf", &a);
    printf("Ingrese el coeficiente b: ");
    scanf("%lf", &b);
    printf("Ingrese el coeficiente c: ");
    scanf("%lf", &c);
    printf("Ingrese el coeficiente d: ");
    scanf("%lf", &d);
    printf("Ingrese el coeficiente e: ");
    scanf("%lf", &e);
    printf("Ingrese el coeficiente f: ");
    scanf("%lf", &f);

    printf("\nSistema de ecuaciones:\n");
    printf("%.2lfX + %.2lfY = %.2lf\n", a, b, c);
    printf("%.2lfX + %.2lfY = %.2lf\n", d, e, f);

    determinante = a * e - b * d;

    printf("\n--- ANÁLISIS ---\n");
    printf("Determinante principal = %.2lf\n", determinante);

    if (fabs(determinante) > 1e-10) {
        double detX = c * e - b * f;
        double detY = a * f - c * d;

        x = detX / determinante;
        y = detY / determinante;

        printf("\n--- SOLUCIÓN ---\n");
        printf("Tipo: Sistema Compatible Determinado (SCD)\n");
        printf("Solución única:\n");
        printf("X = %.2lf\n", x);
        printf("Y = %.2lf\n", y);

    } else {
        double razonCoeficientes = (fabs(a) > 1e-10) ? d/a : 0;
        double razonConstantes = (fabs(c) > 1e-10) ? f/c : 0;

        int coeficientesProporcionales = (fabs(a * e - b * d) < 1e-10);
        int ecuacionesProporcionales = (fabs(a * f - c * d) < 1e-10);

        if (coeficientesProporcionales && ecuacionesProporcionales) {
            printf("\n--- SOLUCIÓN ---\n");
            printf("Tipo: Sistema Compatible Indeterminado (SCI)\n");
            printf("Infinitas soluciones\n");
            printf("Las ecuaciones son linealmente dependientes\n");

            if (fabs(a) > 1e-10) {
                printf("Y = (%.2lf - %.2lfX) / %.2lf\n", c, a, b);
                printf("X puede tomar cualquier valor real\n");
            } else if (fabs(b) > 1e-10) {
                printf("X = (%.2lf - %.2lfY) / %.2lf\n", c, b, a);
                printf("Y puede tomar cualquier valor real\n");
            }

        } else {
            printf("\n--- SOLUCIÓN ---\n");
            printf("Tipo: Sistema Incompatible (SI)\n");
            printf("No tiene solución\n");
            printf("Las ecuaciones representan rectas paralelas\n");
        }
    }

    printf("\n--- TIPOS DE SOLUCIONES POSIBLES ---\n");
    printf("1. SISTEMA COMPATIBLE DETERMINADO (SCD)\n");
    printf("   - Una solución única\n");
    printf("   - Condición: determinante ≠ 0\n");
    printf("   - Las rectas se cortan en un punto\n\n");

    printf("2. SISTEMA COMPATIBLE INDETERMINADO (SCI)\n");
    printf("   - Infinitas soluciones\n");
    printf("   - Condición: ecuaciones proporcionales\n");
    printf("   - Las rectas son coincidentes\n\n");

    printf("3. SISTEMA INCOMPATIBLE (SI)\n");
    printf("   - No tiene solución\n");
    printf("   - Condición: determinante = 0 pero ecuaciones no proporcionales\n");
    printf("   - Las rectas son paralelas\n");

    return 0;
}
