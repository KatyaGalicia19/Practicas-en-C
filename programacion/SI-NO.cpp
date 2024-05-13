#include <stdio.h>

// Función para verificar si una casilla está en la diagonal del alfil
int enDiagonal(int fila, int columna, int falfil, int calfil) {
    return (fila + columna == falfil + calfil) || (fila - columna == falfil - calfil);
}

int main() {
    int falfil, calfil;
    int fila, columna;

    // Posición del alfil
    printf("Posición del alfil (fila, columna): ");
    scanf("%d %d", &falfil, &calfil);
    printf("\n"); // Dejar una línea en blanco

    // Pintar el tablero de ajedrez
    for (fila = 1; fila <= 8; fila++) {
        for (columna = 1; columna <= 8; columna++) {
            if (enDiagonal(fila, columna, falfil, calfil))
                printf("* ");
            else if ((fila + columna) % 2 == 0)
                printf("B ");
            else
                printf("N ");
        }
        printf("\n"); // Cambiar de fila
    }

    return 0;
}
