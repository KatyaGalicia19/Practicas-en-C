#include <stdio.h>

int main() {
    // Información del alumno
    char nombreCompleto[] = "Katya Galicia Cruz";
    char fechaNacimiento[] = "30/12/2003";
    int edad = 20;
    long int telefono = 7131079762;
    char email[] = "katyagalicia34@gmail.com";
    int matricula = 2170543;

    // Mostrar la información
    printf("*Tarjeta de presentación*\n");
    printf("Nombre completo: %s\n", nombreCompleto);
    printf("Fecha de nacimiento: %s\n", fechaNacimiento);
    printf("Edad: %d años\n", edad);
    printf("Teléfono: %ld\n", telefono);
    printf("Email: %s\n", email);
    printf("Matrícula: %d\n", matricula);

    return 0;
}
