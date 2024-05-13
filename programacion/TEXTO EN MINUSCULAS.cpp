#include <stdio.h>
#include <ctype.h>

int main() {
    char letras[80];
    int aux = 0, cont;
    
    /* Leer el texto en minúsculas */
    printf("Introduce texto en minúsculas: \n");
    for (cont = 0; (letras[cont] = getchar()) != '\n'; ++cont)
        aux = cont; // Corregido para contar correctamente la longitud del texto
    
    /* Escribir el texto en mayúsculas */
    printf("El texto en mayúsculas es: \n");
    for (cont = 0; cont <= aux; ++cont) // Corregido para incluir el último carácter
        putchar(toupper(letras[cont]));
    
    return 0;
}
