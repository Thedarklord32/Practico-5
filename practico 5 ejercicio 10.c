#include <stdio.h>

int main() {
    int cant_hamburguesas, cant_hamburguesas_queso, cant_papas, cant_sodas;
    float precio_hamburguesa = 3.0;
    float precio_hamburguesa_queso = 5.0;
    float precio_papas = 2.0;
    float precio_soda = 2.5;

    float total_hamburguesas, total_hamburguesas_queso, total_papas, total_sodas;
    float total_general;
    int total_items;

    printf("=== RESTAURANTE DE HAMBURGUESAS ===\n\n");
    printf("MENÚ:\n");
    printf("- Hamburguesa simple: %.2f Bs\n", precio_hamburguesa);
    printf("- Hamburguesa con queso: %.2f Bs\n", precio_hamburguesa_queso);
    printf("- Papas fritas: %.2f Bs\n", precio_papas);
    printf("- Soda: %.2f Bs\n\n", precio_soda);

    printf("Ingrese la cantidad de hamburguesas simples: ");
    scanf("%d", &cant_hamburguesas);

    printf("Ingrese la cantidad de hamburguesas con queso: ");
    scanf("%d", &cant_hamburguesas_queso);

    printf("Ingrese la cantidad de papas fritas: ");
    scanf("%d", &cant_papas);

    printf("Ingrese la cantidad de sodas: ");
    scanf("%d", &cant_sodas);

    total_hamburguesas = cant_hamburguesas * precio_hamburguesa;
    total_hamburguesas_queso = cant_hamburguesas_queso * precio_hamburguesa_queso;
    total_papas = cant_papas * precio_papas;
    total_sodas = cant_sodas * precio_soda;

    total_general = total_hamburguesas + total_hamburguesas_queso + total_papas + total_sodas;
    total_items = cant_hamburguesas + cant_hamburguesas_queso + cant_papas + cant_sodas;

    printf("\n");
    printf("========================================\n");
    printf("           FACTURA DE COMPRA\n");
    printf("========================================\n");
    printf("ITEM                 CANTIDAD   TOTAL PARCIAL\n");
    printf("----------------------------------------\n");
    printf("Hamburguesas (3Bs)   %4d       %8.2f Bs\n", cant_hamburguesas, total_hamburguesas);
    printf("Hamburguesas c/queso %4d       %8.2f Bs\n", cant_hamburguesas_queso, total_hamburguesas_queso);
    printf("Papas fritas (2Bs)   %4d       %8.2f Bs\n", cant_papas, total_papas);
    printf("Soda (2.5Bs)         %4d       %8.2f Bs\n", cant_sodas, total_sodas);
    printf("----------------------------------------\n");
    printf("T O T A L            %4d       %8.2f Bs\n", total_items, total_general);
    printf("========================================\n");

    return 0;
}
