/* calcular el factorial de una cantidad entera*/

#include <stdio.h>

long int factorial(int n); /* prototipo de función */

main (){

    int n;

    /* leer la cantidad entera*/
    printf ("\nn = ");
    scanf ("%d",&n);

    /* Calcular y visualizar el factorial */
    printf ("\nn ! = %ld \n", factorial (n));
}

long int factorial(int n) { /* calcular el factorial de n*/

    int i;
    long int prod = 1;
    if(n > 1)
    for (i = 2; i <= n; ++i)
    prod *= i;
    return (prod);
}
