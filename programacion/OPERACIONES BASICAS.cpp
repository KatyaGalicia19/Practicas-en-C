#include <stdio.h>
#include <stdlib.h> // Necesario para la función exit()

int resultado = 0;

void suma() {
    int valores, i;
    printf("Ingrese la cantidad de valores a sumar: ");
    scanf("%d", &valores);
    for (i = 0; i < valores; i++) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &valores);
        resultado += valores;
    }
    printf("La suma de los valores es: %d\n", resultado);
}

void resta() {
    int valores, i;
    printf("Ingrese la cantidad de valores a restar: ");
    scanf("%d", &valores);
    for (i = 0; i < valores; i++) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &valores);
        resultado -= valores;
    }
    printf("La resta de los valores es: %d\n", resultado);
}

void multiplicacion() {
    int valores, i;
    printf("Ingrese la cantidad de valores a multiplicar: ");
    scanf("%d", &valores);
    for (i = 0; i < valores; i++) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &valores);
        resultado *= valores;
    }
    printf("La multiplicacion de los valores es: %d\n", resultado);
}

void division() {
    float num1, num2, result;
    printf("Introduce el dividendo: ");
    scanf("%f", &num1);
    printf("Introduce el divisor: ");
    scanf("%f", &num2);
    if (num2 != 0) {
        result = num1 / num2;
        printf("La division  es: %.2f\n", result);
    } else {
        printf("No se puede dividir por cero.\n");
    }
}

void menu() {
    int opc;
    do {
        printf("\n1. Suma \n");
        printf("2. Resta \n");
        printf("3. Multiplicacion \n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("Introduce una opcion: ");
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                suma();
                break;
            case 2:
                resta();
                break;
            case 3:
                multiplicacion();
                break;
            case 4:
                division();
                break;
            case 5:
                printf("Saliendo del programa.\n");
                exit(0);
            default:
                printf("Introduce una opcion valida.\n");
                break;
        }
    } while (opc != 5);
}

int main() {
    menu();
    return 0;
}
