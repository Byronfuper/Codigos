#include <stdio.h>
#include <math.h>

int main() {
    double angulo, resultado;

    printf("Ingrese el angulo en radianes: ");
    scanf("%lf", &angulo);

    resultado = sin(angulo);

    printf("El seno de %.2lf radianes es %.4lf\n", angulo, resultado);

    return 0;
}





