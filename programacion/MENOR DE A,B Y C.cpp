#include <stdio.h>

// Función para calcular el monto total a pagar
float calcular_total(int cantidad, float precio_unitario) {
    float descuento = 0;

    if (cantidad > 100) {
        descuento = 0.4;
    } else if (cantidad >= 25) {
        descuento = 0.2;
    } else if (cantidad >= 10) {
        descuento = 0.1;
    }

    float total = cantidad * precio_unitario * (1 - descuento);
    return total;
}

int main() {
    int codigo_articulo, cantidad_comprada;
    float precio_unitario;

    printf("Codigo artIculo: ");
    scanf("%d", &codigo_articulo);
    printf("Cantidad comprada: ");
    scanf("%d", &cantidad_comprada);
    printf("Precio unitario: ");
    scanf("%f", &precio_unitario);

    printf("\n\n%10s %10s %10s %10s %10s\n\n",
           "ArtIculo", "Cantidad", "P. U.", "Dto.", "Total");
    printf("%10d %10d %10.2f", codigo_articulo, cantidad_comprada, precio_unitario);

    float total_pagar = calcular_total(cantidad_comprada, precio_unitario);
    printf(" %9s%% %10.2f\n", (total_pagar != cantidad_comprada * precio_unitario) ? " " : "--", total_pagar);

    return 0;
}
