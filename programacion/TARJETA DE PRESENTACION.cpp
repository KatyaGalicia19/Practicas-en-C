#include <stdio.h>

int main() {
    // Informaci�n del alumno
    char nombreCompleto[] = "Katya Galicia Cruz";
    char fechaNacimiento[] = "30/12/2003";
    int edad = 20;
    long int telefono = 7131079762;
    char email[] = "katyagalicia34@gmail.com";
    int matricula = 2170543;

    // Mostrar la informaci�n
    printf("*Tarjeta de presentaci�n*\n");
    printf("Nombre completo: %s\n", nombreCompleto);
    printf("Fecha de nacimiento: %s\n", fechaNacimiento);
    printf("Edad: %d a�os\n", edad);
    printf("Tel�fono: %ld\n", telefono);
    printf("Email: %s\n", email);
    printf("Matr�cula: %d\n", matricula);

    return 0;
}
