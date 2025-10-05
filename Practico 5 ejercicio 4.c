#include <stdio.h>

int main() {
    int h1, m1, s1, h2, m2, s2;
    int total1, total2, diferencia;
    int h_diff, m_diff, s_diff;

    printf("Ingrese primer horario (HH:MM:SS): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Ingrese segundo horario (HH:MM:SS): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    total1 = h1 * 3600 + m1 * 60 + s1;
    total2 = h2 * 3600 + m2 * 60 + s2;

    diferencia = total2 - total1;

    h_diff = diferencia / 3600;
    diferencia = diferencia % 3600;
    m_diff = diferencia / 60;
    s_diff = diferencia % 60;

    printf("\nDiferencia: %d:%02d:%02d\n", h_diff, m_diff, s_diff);

    return 0;
}
