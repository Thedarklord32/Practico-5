#include <stdio.h>

int main() {
    float peso;
    float costo;

    printf("Ingrese el peso de la carta en gramos: ");
    scanf("%f", &peso);

    if (peso <= 0) {
        printf("Error: El peso debe ser mayor que 0 gramos.\n");
        return 1;
    }

    if (peso > 0 && peso <= 50) {
        costo = 1.50;
        printf("El costo de envio es: Bs. %.2f\n", costo);
    }
    else if (peso > 50 && peso <= 100) {
        costo = 4.00;
        printf("El costo de envio es: Bs. %.2f\n", costo);
    }
    else if (peso > 100 && peso <= 200) {
        costo = 6.00;
        printf("El costo de envio es: Bs. %.2f\n", costo);
    }
    else if (peso > 200 && peso <= 350) {
        costo = 10.50;
        printf("El costo de envio es: Bs. %.2f\n", costo);
    }
    else if (peso > 350 && peso <= 500) {
        costo = 15.00;
        printf("El costo de envio es: Bs. %.2f\n", costo);
    }
    else {
        printf("NO PUEDE ENVIAR COMO CARTA\n");
    }

    return 0;
}
