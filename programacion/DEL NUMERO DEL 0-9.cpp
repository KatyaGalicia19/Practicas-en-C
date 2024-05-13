#include <stdio.h>

// Función para visualizar los números del 0 al 9
void visualizar_numeros() {
    int digito;
    for (digito = 0; digito <= 9; ++digito)
        printf("%d\n", digito);
}

int main() {
    // Llamada a la función para visualizar los números del 0 al 9
    visualizar_numeros();
    return 0;
}
