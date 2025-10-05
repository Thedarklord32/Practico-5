#include <stdio.h>

int main() {
    int dia, mes, anio;

    printf("Ingrese fecha (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &anio);

    int fechaNumerica = mes * 100 + dia;
    const char* estacion;

    if (fechaNumerica >= 921 && fechaNumerica <= 1220) {
        estacion = "Primavera";
    }
    else if (fechaNumerica >= 321 && fechaNumerica <= 620) {
        estacion = "Otoño";
    }
    else if (fechaNumerica >= 621 && fechaNumerica <= 920) {
        estacion = "Invierno";
    }
    else {
        estacion = "Verano";
    }

    printf("Fecha: %02d/%02d/%d\n", dia, mes, anio);
    printf("Estación: %s\n", estacion);

    return 0;
}
