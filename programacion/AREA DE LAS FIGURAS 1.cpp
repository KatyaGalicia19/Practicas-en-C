#include <stdio.h>

// Funci�n para encontrar el menor de tres n�meros
float encontrar_menor(float a, float b, float c) {
    float menor;

    if (a < b) {
        if (a < c) {
            menor = a;
        } else {
            menor = c;
        }
    } else {
        if (b < c) {
            menor = b;
        } else {
            menor = c;
        }
    }

    return menor;
}

int main() {
    float a, b, c;
    printf("Ingrese tres numeros (a b c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Llamada a la funci�n para encontrar el menor
    float menor = encontrar_menor(a, b, c);

    printf("El menor es: %g\n", menor);

    return 0;
    }
