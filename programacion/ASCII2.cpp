/* Código ASCII de cada uno de los caracteres de un texto */

#include <stdio.h>

    main(){
    char car = 0; // car = carácter nulo (\0)
    printf("Introduzca una cadena de texto.\n");
    printf("Para terminar pulse Ctrl+z\n");
    while ((car = getchar()) != EOF)
    {
    if (car != '\n')
    printf("El código ASCII de %c es %d\n", car, car);
    }
}

/*#include <stdio.h>

    main(){
    char car = 0; // car = carácter nulo (\0)
    printf("Introduzca una cadena de texto.\n");
    printf("Para terminar pulse Ctrl+z\n");
    while (scanf("%c", &car) != EOF)
    {
    if (car != '\n')
    printf("El código ASCII de %c es %d\n", car, car);
    }
} */
