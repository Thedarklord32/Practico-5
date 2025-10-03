#include <stdio.h>

int main() {
    int N, m, c, d, u;

    printf("=== DESGLOSE DE DIGITOS ===\n");
    printf("Ingrese un numero (0-9999): ");
    scanf("%d", &N);

    if (N < 0 || N >= 10000) {
        printf("Error: El numero debe estar entre 0 y 9999\n");
        return 1;
    }

    u = N % 10;           // Unidades
    d = (N / 10) % 10;    // Decenas
    c = (N / 100) % 10;   // Centenas
    m = (N / 1000) % 10;  // Unidades de mil

    printf("\n--- RESULTADO ---\n");
    printf("Numero ingresado: %d\n", N);
    printf("Unidades de mil: %d\n", m);
    printf("Centenas: %d\n", c);
    printf("Decenas: %d\n", d);
    printf("Unidades: %d\n", u);

    return 0;
}
