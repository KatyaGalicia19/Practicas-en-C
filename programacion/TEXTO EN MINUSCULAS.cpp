#include <stdio.h>
#include <ctype.h>

int main() {
    char letras[80];
    int aux = 0, cont;
    
    /* Leer el texto en min�sculas */
    printf("Introduce texto en min�sculas: \n");
    for (cont = 0; (letras[cont] = getchar()) != '\n'; ++cont)
        aux = cont; // Corregido para contar correctamente la longitud del texto
    
    /* Escribir el texto en may�sculas */
    printf("El texto en may�sculas es: \n");
    for (cont = 0; cont <= aux; ++cont) // Corregido para incluir el �ltimo car�cter
        putchar(toupper(letras[cont]));
    
    return 0;
}
