#include <stdio.h>
#include <math.h>

#define PI 3.1416

double area_cuadrado(int lado) {
    return lado * lado;
}
double area_rectangulo(float base, float altura) {
    return base * altura;
}
double area_triangulo(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
double area_circulo(long radio) {
    return PI * radio * radio;
}

int main() {
    printf("Area del cuadrado de lado 5: %.2lf\n", area_cuadrado(5));
    printf("Area del rectangulo de base 3.5 y altura 7.2: %.2lf\n", area_rectangulo(3.5, 7.2));
    printf("Area del triangulo de lados 4.0, 6.0 y 5.0: %.2lf\n", area_triangulo(4.0, 6.0, 5.0));
    printf("Area del circulo de radio 10: %.2lf\n", area_circulo(10));

    return 0;
}
